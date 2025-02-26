#include <iostream> 
using namespace std;

class Vector {

public:
    int size;
    int capacity;
    int* arr;
    
    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int element) {
        if(size==capacity) {
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++) {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }

        arr[size] = element;
        size++;

    }
    void print() {
        for(int i = 0;i<size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void get(int idx) {
        if(size==0) {
            cout<<"Array is Empty"<<endl;
          
        }
        if(idx>=size || idx<0) {
            cout<<"Invalid Index"<<endl;
          
        }
        cout<<arr[idx]<<endl;

    }
    void remove() {
        if(size==0) {
            cout<<"Array is Empty"<<endl;
        }
        size--;
    }    
};

int main() {

    Vector v;
    v.add(5);
    v.add(10);
    cout<<"Array Right Now"<<endl;
    v.print();
    v.add(100);
    cout<<"Array Right Now"<<endl;
    v.print();
    cout<<"GET FIRST"<<endl;
    v.get(0);
    cout<<"GET SECOND"<<endl;
    v.get(10);
    v.remove();
    cout<<"Array Right Now"<<endl;
    v.print();
    cout<<"GET THIRD"<<endl;
    v.get(2);
    cout<<"GET FOURTH"<<endl;
    v.get(1);
    v.remove();
    cout<<"Array Right Now"<<endl;
    v.print();
    

}