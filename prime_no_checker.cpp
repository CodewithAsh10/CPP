#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither Prime nor Composite.\n";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {   // Loop  up to √n
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number.\n";
    } else {
        cout << n << " is a Composite number.\n";
    }

    return 0;
}
