#include <iostream>
#include <iomanip>
using namespace std;

void swap(int& x,int& y) {
    int temp = x;
    x=y;
    y=temp;
}

int main() {
    int x;
    cout<<"Enter first no: ";
    cin>>x;
    int y;
    cout<<"Enter second no: ";
    cin>>y;
    cout<<"Original Value: "<<endl;
    cout<<x<<" "<<y<<endl;
    cout<<"Swapped Value: "<<endl;
    swap(x,y);
    cout<<x<<" "<<y;

}
