#include "3.h"

int main() {
    int x;
    DonThuc d1, d2;

    d1.input();
    d2.input();

    cin >> x;
    auto value = d1.getValueByX(x);

    cout << value << "\n";

    auto sum = d1 + d2;
    cout << sum;

    return 0;
}