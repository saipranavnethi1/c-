#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (num % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not a Harshad Number";

    return 0;
}