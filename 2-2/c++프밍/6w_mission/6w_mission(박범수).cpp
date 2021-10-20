//202020898 박범수
//실습문제 4번
/*
#include <iostream>
#include <string>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show();
};
MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}
void MyVector::show() {
	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
	}
	cout << endl;
}

int main() {
	MyVector a, b(10, 1);
	a.show();
	b.show();

	return 0;
}
*/

//실습문제 5번
/*
#include <iostream>
#include <string>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size);
	static void doubleToInt(double source[], int dest[], int size);
};
void ArrayUtility::intToDouble(int source[], double dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = (double)source[i];
	}
}
void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = (int)source[i];
	}
}
int main() {
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.6 };

	ArrayUtility::intToDouble(x, y, 5);
	for (int i = 0; i < 5; i++)cout << y[i] << ' ';
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5);
	for (int i = 0; i < 5; i++)cout << x[i] << ' ';
	cout << endl;
}
*/

//실습문제 7번
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	return rand() % (max - min) + min;
}
char Random::nextAlphabet() {
	if (rand() % 2 == 0) return rand() % 26 + 'a';
	else return rand() % 26 + 'A';
}
double Random::nextDouble() {
	return (double)rand() / RAND_MAX;
}
int main() {
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl;

	cout << "랜덤한 실수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
	}
	cout << endl;
	return 0;
}