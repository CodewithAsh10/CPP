#include <iostream>
using namespace std;

class complex {
public:
    double r;
    double i;

    complex() {

        r = 0.0;
        i = 0.0;
        cout<<"Constructor"<<endl;
    }

    complex(double r, double i) {
        r = r;
        i = i;
        cout<<"Constructor"<<r<<" + "<<i<<"i"<<endl;
    }

    ~complex() {
        cout << "Destructor"<<r<<" + "<<i<<"i"<<endl;
    }

    complex sum(complex n) {
        complex t;
        t.r = r + n.r;
        t.i = i + n.i;
        return t;
    }

    complex difference(complex n) {
        complex t;
        t.r = r - n.r;
        t.i = i - n.i;
        return t;
    }

    complex product(complex n) {
        complex t;
        t.r = r * n.r - i * n.i;
        t.i = r * n.i + i * n.r;
        return t;
    }
};

int main() {
    complex n1(1.5, 2.5), n2(3.5, 4.5), result;

    result = n1.sum(n2);
    cout << "Sum: " << result.r << " + " << result.i << "i" << endl;

    result = n1.difference(n2);
    cout << "Difference: " << result.r << " + " << result.i << "i" << endl;

    result = n1.product(n2);
    cout << "Product: " << result.r << " + " << result.i << "i" << endl;

}

