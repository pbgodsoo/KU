//202020898 �ڹ���
//3-1
/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}
*/

//3-2
/*
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}
*/

//3-3
/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}
*/

//3-4
/*
#include <iostream> 
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}
*/

//3-5
/*
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { }

Point::Point(int a, int b)
	: x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/

//3-6
/*
#include <iostream> 
using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
*/

//�ǽ� Activity 1
/*
#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}


int main() {
	Tower myTower;	// 1 ����
	Tower seoulTower(100); // 100 ����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
*/

//�ǽ� Activity 2
/*
#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id, balance;
public:
	Account();
	Account(string n, int i, int b);
	void deposit(int m);
	string getOwner();
	int withdraw(int m);
	int inquiry();
};

Account::Account() {
	name = " ";
	id = 0; 
	balance = 0;
}

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

void Account::deposit(int m) {
	balance += m;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int m) {
	balance -= m;
	return m;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);	// id 1��, �ܾ� 5000��, �̸��� kitae�� ����
	a.deposit(50000);				// 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
*/