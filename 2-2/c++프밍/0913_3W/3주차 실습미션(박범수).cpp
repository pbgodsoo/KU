//202020898	박범수
//ppt 53p
/*
#include <iostream>
using namespace std;

#include "Exp.h"
int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스" << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}
*/

//ppt 54p
/*
#include <iostream>
using namespace std;

#include "CoffeeMachine.h"


int main() {
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}
*/

//ppt 55p
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
    Random();
    int next();
    int nextInRange(int low, int high);
};
Random::Random() {
    srand((unsigned)time(0));
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int low, int high) {
    int range = (high - low) + 1;
        return low + (rand() % range);
}

int main() {
    Random r;
    int a, b;

    cout << "0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개" << endl;
    for (int i = 0; i < 10; ++i) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl <<endl;

    cin >> a >> b;
    cout << a << "에서 " << b << "까지의 랜덤 정수 10 개" << endl;
    for (int i = 0; i < 10; ++i) {
        int n = r.nextInRange(a, b);
        cout << n << ' ';
    }
    cout << endl;
}
*/

//p.153 연습문제 9번
/*
#include <iostream>
#include <string>

using namespace std;

class Oval {
private:
    int width;
    int height;
public:
    Oval() {
        width = height = 1;
    }

    Oval(int width, int height) {
        this->width = width;
        this->height = height;
    }

    ~Oval() {
        cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
    }

    void show() {
        cout << "width = " << width << ", height = " << height << endl;
    }

    void set(int width, int height) {
        this->width = width;
        this->height = height;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }
};

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}
*/

//p.155 연습문제 11번
/*
#include<iostream>
using namespace std;

#include "Box.h"

int main() {
    Box b(10, 2);
    b.draw();
    cout << endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();
}
*/