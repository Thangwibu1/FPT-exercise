#include <iostream>

using namespace std;

int main () {
    int price = 100;
    int discount = 75;
    float price_after_discount = price - (price * (75 / 100));
    cout << price_after_discount << endl;
    return 0;
}