//202020898 �ڹ���
//6��
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";

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

//11��
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
        cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****\n";
    start++;
    while (true) {
        cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
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
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    cout << "���������� �弼��\n";
}

void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    cout << "�Ƹ޸�ī�� �弼��\n";
}

void CoffeeVendingMachine::selectSugarCoffee() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    cout << "����Ŀ�� �弼��\n";
}

void CoffeeVendingMachine::show() {
    cout << "Ŀ�� " << tong[0].getSize();
    cout << ", �� " << tong[1].getSize();
    cout << ", ���� " << tong[2].getSize() << endl;
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

//12��
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
        cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

CircleManager::~CircleManager() {
    delete[] p;
}

void CircleManager::searchByName() {
    cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
    cin >> name;
    for (int i = 0; i < size; i++) {
        if (name == p[i].getName()) {
            cout << name << "�� ������ " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
    cin >> radius;
    cout << radius << "���� ū ���� �˻��մϴ�.\n";
    for (int i = 0; i < size; i++) {
        if (radius < p[i].getArea()) {
            cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
        }
    }
}

int main() {
    int size;
    cout << "���� ���� >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();

}
*/