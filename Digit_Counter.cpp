#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = n;
    int count = 0;
    while(n!=0) {
        n = n/10;
        count++; 
    }
    cout<<"The no. of digit in "<<num<<" is "<<count;
}