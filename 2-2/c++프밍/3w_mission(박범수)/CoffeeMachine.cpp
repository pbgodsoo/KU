#include <iostream>
using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
    coffee = c; water = w;  sugar = s;
}

void CoffeeMachine::drinkEspresso() {
    --water; --coffee;
}

void CoffeeMachine::drinkAmericano() {
    water -= 2;  --coffee;
}

void CoffeeMachine::drinkSugarCoffee() {
    water -= 2; --coffee; --sugar;
}

void CoffeeMachine::show() {
    cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water << " ����:" << sugar << "\n";
}

void CoffeeMachine::fill() {
    water = 10; coffee = 10; sugar = 10;
}