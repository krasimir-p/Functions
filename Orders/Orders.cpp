#include <iostream>
#include <iomanip>

using namespace std;

void totalPrice(const float itemPrice, int quantity) {
    cout << fixed << setprecision(2) << itemPrice * quantity << endl;
}

int main()
{
    const float COFFEE_PRICE = 1.5;
    const float WATER_PRICE = 1.0;
    const float COKE_PRICE = 1.4;
    const float SNACKS_PRICE = 2.00;

    string item;
    cin >> item;
    int quantity;
    cin >> quantity;

    float itemPrice;

    if (item == "coffee") {
        itemPrice = COFFEE_PRICE;
    }
    else if (item == "water") {
        itemPrice = WATER_PRICE;
    }
    else if (item == "coke"){
        itemPrice = COKE_PRICE;
    }else if(item=="snacks"){
        itemPrice = SNACKS_PRICE;
    }

    totalPrice(itemPrice, quantity);

    return 0;
}
