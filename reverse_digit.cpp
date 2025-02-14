#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = n;
    int rev = 0;
    while (n!=0) {
        int ld = n%10;
        rev = rev*10;
        rev = rev + ld;
        n = n/10;
    }
    cout<<"Original Value: "<<num<<endl;
    cout<<"Reversed Value: "<<rev;
}