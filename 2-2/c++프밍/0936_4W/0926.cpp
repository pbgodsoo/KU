//202020898 박범수
//6번
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";

    while (true) {
        cout << endl << ">>";
        getline(cin, str);
        if (str == "exit")
            break;
        for (int i = str.length() - 1; i >= 0; i--)
            cout << str[i];
    }
}
*/

//11번
/*
#include<iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill();
    void consume();
    int getSize();
};

class CoffeeVendingMachine {
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
public:
    void run();
};

int start = 0;

void Container::fill() {
    size = 10;
}
void Container::consume() {
    size--;
}
int Container::getSize() {
    return size;
}

void CoffeeVendingMachine::run() {
    int num;
    if (start == 0)
        cout << "***** 커피 자판기를 작동합니다. *****\n";
    start++;
    while (true) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
        cin >> num;
        switch (num) {
        case 1:
            selectEspresso();
            break;
        case 2:
            selectAmericano();
            break;
        case 3:
            selectSugarCoffee();
            break;
        case 4:
            show();
            break;
        case 5:
            fill();
            break;
        }
    }
}

void CoffeeVendingMachine::selectEspresso() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    cout << "에스프레소 드세요\n";
}

void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    cout << "아메리카노 드세요\n";
}

void CoffeeVendingMachine::selectSugarCoffee() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    cout << "설탕커피 드세요\n";
}

void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getSize();
    cout << ", 물 " << tong[1].getSize();
    cout << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::fill() {
    for (int i = 0; i < 3; i++) {
        tong[i].fill();
    }
    show();
}

int main() {
    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
*/

//12번
/*
#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius;
    string name;
public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

class CircleManager {
    Circle* p;
    int size;
    int radius;
    string name;
public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName(); 
    void searchByArea();
};

void Circle::setCircle(string name, int radius) {
    this->name = name;
    this->radius = radius;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

string Circle::getName() {
    return name;
}

CircleManager::CircleManager(int size) {
    p = new Circle[size];
    this->size = size;
    for (int i = 0; i < size; i++) {
        cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

CircleManager::~CircleManager() {
    delete[] p;
}

void CircleManager::searchByName() {
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name;
    for (int i = 0; i < size; i++) {
        if (name == p[i].getName()) {
            cout << name << "의 면적은 " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> radius;
    cout << radius << "보다 큰 원을 검색합니다.\n";
    for (int i = 0; i < size; i++) {
        if (radius < p[i].getArea()) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
        }
    }
}

int main() {
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();

}
*/