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
    cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << "\n";
}

void CoffeeMachine::fill() {
    water = 10; coffee = 10; sugar = 10;
}