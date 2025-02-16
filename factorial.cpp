#include <iostream>
using namespace std;

int fact(int n) {
    if (n==0 or n==1) {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
// Factorial using Loops
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fac = 1;
    int i = 1; 
    while (i<=n) {
        fac = fac*i;
        i++;
    }
    cout<<"(Loops) Factorial of "<<n<<" : "<<fac<<endl;

// Factorial using recursion
    cout<<"(Recursion) Factorial of "<<n<<" : "<<fact(n);

}

