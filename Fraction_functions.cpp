#include <iostream>
using namespace std;

class Fraction {

    public: 
    int numo;
    int deno;

    Fraction(int numo,int deno) {
        this->numo = numo;
        this->deno = deno;
    }

    void display() {
        cout<<numo<<"/"<<deno<<endl;
    }
    Fraction operator+ (Fraction& f) {
        int addnumo = this->numo*f.deno + f.numo*this->deno;
        int adddeno = this->deno*f.deno;
        Fraction ans(addnumo,adddeno);
        return ans;        
    }
    Fraction operator- (Fraction& f) {
        int addnumo = this->numo*f.deno - f.numo*this->deno;
        int adddeno = this->deno*f.deno;
        Fraction ans(addnumo,adddeno);
        return ans;        
    }
    Fraction operator* (Fraction& f) {
        int addnumo = this->numo*f.numo;
        int adddeno = this->deno*f.deno;
        Fraction ans(addnumo,adddeno);
        return ans;        
    }
};

int main() {
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.display();
    f2.display();
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 - f2;
    Fraction f5 = f1*f2;
    f3.display();
    f4.display();
    f5.display();
}