//202020898 �ڹ���
//6��
/*
#include<iostream>
using namespace std;

int main()
{
	string a, b;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> b;

	if (a == b)
		cout << "�����ϴ�." << endl;
	else
		cout << "���� �ʽ��ϴ�." << endl;
}
*/

//8��
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string a;
	char name[100];
	int max = 0;
	int n = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";

	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		if (max < strlen(name)) {
			max = strlen(name);
			n = i;
			a = name;
		}
	}
	cout << "���� �� �̸��� " << a << endl;
}
*/

//11��
/*
#include<iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;

	cout << "������ �Է��ϼ���>>";
	cin >> n;

	for (k = 0; k <= n; k++) {
		sum += k;
	}

	cout << "1���� " << n << "������ ���� " << sum << " �Դϴ�.\n";
}
*/