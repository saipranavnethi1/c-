#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t, amount, ci;

    cin >> p >> r >> t;

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    cout << "Compound Interest = " << ci;

    return 0;
}