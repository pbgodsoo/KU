//202020898 ¹Ú¹ü¼ö
//6-5
/*
#include <iostream>
using namespace std;

void fillLine(int n = 25, char c = '*') {
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}

int main() {
	fillLine(); 
	fillLine(10, '%'); 
}
*/

//6-6
/*
#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, * v2;
	v1 = new MyVector(); 
	v2 = new MyVector(1024); 

	delete v1;
	delete v2;
}
*/

//6-7
/*
#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);
	cout << square(3); 
}
*/

//6-8
/*
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int& b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);
}
*/

//6-9
/*
#include <iostream>
#include <string>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");
	msg(6); 
}
*/
