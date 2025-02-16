#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

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
    int i = 1; 
    while (i<=n) {
        a = a*i;
        i++;
    }

// R!
    int b = 1;
    int j = 1; 
    while (j<=r) {
        b = b*j;
        j++;
    }

// (N-R)!
    int c = 1;
    int s = n-r;
    int k = 1; 
    while (k<=s) {
        c = c*k;
        k++;
    }

    
// Permutation n!/(n-r)!
    float result_p = 0;
    result_p = a/c;
    cout<<"Permutation of "<<n<<"P"<<r<<" : "<<result_p<<endl;

// Combination n!/((n-r)!*r!)
    float result_c = 0;
    result_c = a/(c*b);
    cout<<"Combination of "<<n<<"C"<<r<<" : "<<result_c;
}

