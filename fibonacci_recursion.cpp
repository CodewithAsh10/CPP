#include <iostream>
#include <iomanip>
using namespace std;

int fib(int n) {
    if (n == 1 or n == 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout<<"Enter the term: ";
    cin>>n;
    cout<<fib(n);
}


