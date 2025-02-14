#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fac = 1;
    int i = 1; 
    while (i<=n) {
        fac = fac*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" : "<<fac;
}