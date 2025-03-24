// ************* Without Constructor and Destructor *******************
// Shape is rectangle 

// #include <iostream>
// using namespace std;

// class Shape {
// private:
//     double area, perimeter;

// public:
//     double Find_Area() {
//         double length, width;
//         cout<<"Length: ";
//         cin>>length;
//         cout<<"Width: ";
//         cin>>width;
//         area = length*width;
//         return area;
//     }

//     double Find_Perimeter() {
//         double length, width;
//         cout<<"Length: ";
//         cin>>length;
//         cout<<"Width: ";
//         cin>>width;
//         perimeter = 2*(length + width);
//         return perimeter;
//     }
// };

// int main() {
//     Shape s;
//     cout<<"Area: "<<s.Find_Area()<<endl;
//     cout<<"Perimeter: "<<s.Find_Perimeter()<<endl;
//     return 0;
// }


// ************** With Constructor and Destructor ***************************

#include <iostream>
using namespace std;

class Shape {
private:
    double area, perimeter;

public:
    // Constructor
    Shape() {
        double length, width;
        cout<<"Constructor is called"<<endl;
        cout<<"Length: ";
        cin>>length;
        cout<<"Width: ";
        cin>>width;
        area = length*width;
        perimeter = 2*(length + width);
    }

    // Destructor
    ~Shape() {
        cout<<"Destructor is called"<<endl;
    }

    double Find_Area() {
        return area;
    }

    double Find_Perimeter() {
        return perimeter;
    }
};

int main() {
    Shape s;
    cout<<"Area: "<<s.Find_Area()<<endl;
    cout<<"Perimeter: "<<s.Find_Perimeter()<<endl;
    return 0;
}