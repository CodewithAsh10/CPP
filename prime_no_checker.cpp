#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    bool flag = true;
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            flag = false;
            break;
        }
    }
    if (n==1) {
        cout<<n<<" is neither Prime nor Composite";
    }
    else if(flag==true){
        cout<<n<<" is Prime NO.";
    }    
    else {
        cout<<n<<" is Composite No.";
    }
    
}
