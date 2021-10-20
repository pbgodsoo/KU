//5-1
/*
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) {
		this->radius = radius;
	}
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}
*/

//5-2
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // ��ü tmp�� �����Ѵ�.
}

int main() {
	Circle c; // ��ü�� �����ȴ�. radius=1�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}
*/

//5-3
/*
#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n; // ���� ���� refn ����. refn�� n�� ���� ����
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; // p�� n�� �ּҸ� ����
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}
*/

//5-4
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}
*/

//5-5
#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) cout << "����� " << avg << endl;
	else cout << "�Ű� ���� ����" << endl;

	if (average(x, -2, avg)) cout << "����� " << avg << endl;
	else cout << "�Ű� ���� ���� " << endl;
}
