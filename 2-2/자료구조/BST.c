#include <stdio.h>
#include <stdlib.h>

// TreeNode 타입  
typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

// key값을 갖는 새 노드 동적 생성 
TreeNode * new_node(int key)
{
    TreeNode *p;

    p = (TreeNode *) malloc(sizeof(TreeNode));
    p->data = key;
    p->left = p->right = NULL;
    return p;
}

// BST에서 key 탐색 
TreeNode * search(TreeNode *p, int key) 
{
    if (p == NULL) return NULL;
    if (key == p->data) return p;
    if (key < p->data)
        return search(p->left, key);
    return search(p->right, key);
}

// BST에 key 삽입 
TreeNode * insert_node(TreeNode * node, int key)
{
    // 트리가 공백이면 새로운 노드를 반환한다. 
    if (node == NULL) return new_node(key);
    
    // 그렇지 않으면 순환적으로 트리를 내려간다. 
    if (key < node->data)
        node->left = insert_node(node->left, key);
    else if (key > node->data)
        node->right = insert_node(node->right, key);
        
    // 변경된 루트 포인터를 반환한다. 
    return node;
}

// 중위 순회 
void inorder(TreeNode *p)
{
    if(p != NULL) { 
        inorder(p->left);
        printf("%d ", p->data); // visit
        inorder(p->right);
    }
}

int main()
{
    int         data;
    TreeNode    *root, *p;

    root = NULL;
  
    do {
        scanf("%d", &data);
        if (data == -1) break;

        // data를 BST에서 탐색
        // 이미 있으면 "X already exists." 메시지 출력
        // 없으면 BST에 삽입 후 "X is inserted." 출력
        if ( search(root, data) == NULL ) {
            root = insert_node(root, data);
            printf("%d is inserted.\n", data);
        } else {
            printf("%d already exists.\n", data);
        }
    } while (1);

    // inorder traversal
    inorder(root);
    
}
