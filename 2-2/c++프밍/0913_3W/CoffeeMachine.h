class CoffeeMachine {
    int water;
    int coffee;
    int sugar;
public:
    CoffeeMachine(int c, int w, int s);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show();
    void fill();
};