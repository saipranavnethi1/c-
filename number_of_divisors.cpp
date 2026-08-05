#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    cout << "Number of divisors = " << count;

    return 0;
}