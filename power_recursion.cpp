#include <iostream>
#include <iomanip>
using namespace std;

int power(int n,int r) {
    if (r==0) {
        return 1;
    }
    return n*power(n,r-1);
}
int main() {
    int n;
    cout<<"Enter the Value: ";
    cin>>n;
    int r;
    cout<<"Enter the power: ";
    cin>>r;
    cout<<power(n,r);
}

