#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function of Factorial
int fact(int x) {
    int f = 1;
    int i = 1; 
    while (i<=x) {
        f = f*i;
        i++;
    }
    return f;
}

int main() {

// Input Taking
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;

// N!
    int a = 1;
    a = fact(n);


// R!
    int b = 1;
    b = fact(r);

// (N-R)!
    int c = 1;
    c = fact(n-r);
    
// Permutation n!/(n-r)!
    int result_p = 0;
    result_p = a/c;
    cout<<"Permutation of "<<n<<"P"<<r<<" : "<<result_p<<endl;

// Combination n!/((n-r)!*r!)
    int result_c = 0;
    result_c = a/(c*b);
    cout<<"Combination of "<<n<<"C"<<r<<" : "<<result_c;
}

