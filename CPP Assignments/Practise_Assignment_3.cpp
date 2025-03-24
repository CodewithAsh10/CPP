#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;

    cout<<"Enter a integer: ";
    cin>>num;
    try {
        if (num < 0) {
            throw num;
        }
    
    for (int i=1;i<=num;i++) {
        fact*=i;
    }
    cout<<"Factorial of "<<num<<" is: "<<fact<<endl;
    } 
    
    catch(int errfact) {
        cout<<"Error: "<<errfact<<" is a negative integer!"<<endl;
    }
    return 0;
}


// int main() {
//     int a;
//     int arr[5] = {10,20,30,40,50};
//     cout<<"Enter the index: ";
//     cin>>a;
//     try {
//         if (a<0 || a>=5) {
//             throw a;
//         }
//         cout<<"Value at index "<<a<<": "<<arr[a]<<endl;
    
//     }
    
//     catch (int errIndex) {
//         cout<<"Error: "<<errIndex<<" is invalid index !!"<<endl;
//     }   

//     return 0;

// }
