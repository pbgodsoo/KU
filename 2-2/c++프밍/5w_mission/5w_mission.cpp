//202020898 박범수
//p.270 실습문제 1번
/*
#include<iostream>
using namespace std;

class Circle {
    int num;
public:
    Circle();
    Circle(int num) { this->num = num; }
    void setNum(int num) { this->num = num; }
    int getNum() { return num; }
};

void swap(Circle& a, Circle& b) {
    int swap;
    swap = a.getNum();
    a.setNum(b.getNum());
    b.setNum(swap);
}

int main() {
    Circle a(1), b(10);
    cout << a.getNum() << " " << b.getNum() << endl;
    swap(a, b);
    cout << a.getNum() << " " << b.getNum();
}
*/

//p.270 실습문제 5번
/*
#include<iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) { radius = r; }
    int getRadius() { return radius; }
    void setRadius(int r) { radius = r; }
    void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

void increaseBy(Circle& a, Circle& b) {
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}

int main() {
    Circle x(10), y(5);
    increaseBy(x, y);
    x.show();
}
*/

//p.274 실습문제 11번
//(1)
/*
Book::Book(const char* title, int price) {
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
    this->price = price;
}

Book::~Book() { // (1) 정답
    if (title)
        delete[] title;
}

void Book::set(const char* title, int price) {
    if (this->title)
        delete[] this->title; 
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
    this->price = price;
}
*/

//(2)
/*
Book::Book(Book& b) {
    title = b.title;
    price = b.price;
}
*/

//(3)
/*
Book::Book(Book& b) {
    int len = strlen(b.title);
    title = new char[len + 1];
    strcpy(title, b.title);
    price = b.price;
}
*/

/*
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Book {
    string title;
    int price;
public:
    Book(string title, int price);
    void set(string title, int price);
    void show() {cout << title << ' ' << price << "원" << endl;}
};

Book::Book(string title, int price){
    this->price = price;
    this->title = title;
}

void Book::set(string title, int price) {
    this->price = price;
    this->title = title;
}

int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}
*/
