#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int freq[10] = {0};

    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0)
            cout << i << " : " << freq[i] << endl;
    }

    return 0;
}