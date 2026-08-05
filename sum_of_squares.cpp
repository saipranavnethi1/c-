#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i * i;

    cout << "Sum = " << sum;

    return 0;
}