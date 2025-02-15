#include <iostream> 
using namespace std;

int main() {

// Rectangle Pattern 
    int m;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no. of column: ";
    cin>>n;

    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            cout<<" * ";
        }
         
        cout<<endl;
    }
    
    cout<<endl;

// Star Triangle Pattern

    int q;
    cout<<"Enter the no. the of rows: ";
    cin>>q;
    for (int i=1;i<=q;i++) {
        for (int j=1;j<=i;j++) {
            cout<<" * ";
        }
         
        cout<<endl;
    }

// Star Triangle Ulta  
    int w;
    cout<<"Enter the no. the of rows: ";
    cin>>w;
    for (int i=1;i<=w;i++) {
        for (int j=1;j<=w-i+1;j++) {
            cout<<" * ";
        }
         
        cout<<endl;
    }

// Triple Loop 

    int r;
    cout<<"Enter the no. the of rows: ";
    cin>>r;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=r-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++) {
            cout<<"* ";
        }
     
        cout<<endl;
    }

// 0101 Pattern 
    int y;
    cout<<"Enter the no. the of rows: ";
    cin>>y;
    for (int i=1;i<=y;i++) {
        for (int j=1;j<=i;j++) {
            if ((i+j)%2==0) {
                cout<<1;
            }
            else {
                cout<<0;           
            }
        }    
    cout<<endl;
    }
}
  





