#include <iostream>
#include <cmath>
using namespace std;

// Base class: Shape
class Shape {
protected:
    double area, perimeter;

public:
    virtual void computeArea() = 0;       // Pure virtual function
    virtual void computePerimeter() = 0;  // Pure virtual function
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
    void display() {
        cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    }
    
    virtual ~Shape() {   // Virtual destructor for proper cleanup
        cout << "Shape destroyed." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    void computeArea() override {
        area = M_PI * radius * radius;
    }

    void computePerimeter() override {
        perimeter = 2 * M_PI * radius;
    }

    void draw() override { 
        cout << "Drawing a Circle." << endl;
    }

    ~Circle() {
        cout << "Circle destroyed." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
    double a, b, c;

public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}

    void computeArea() override {
        double s = (a + b + c) / 2; // Semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void computePerimeter() override {
        perimeter = a + b + c;
    }

    void draw() override { 
        cout << "Drawing a Triangle." << endl;
    }

    ~Triangle() {
        cout << "Triangle destroyed." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void computeArea() override {
        area = length * width;
    }

    void computePerimeter() override {
        perimeter = 2 * (length + width);
    }

    void draw() override { 
        cout << "Drawing a Rectangle." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }
};

// Main function
int main() {
    // Array of Shape pointers
    Shape* shapes[3];

    // Creating dynamic objects
    shapes[0] = new Circle(5);
    shapes[1] = new Triangle(3, 4, 5);
    shapes[2] = new Rectangle(4, 6);

    // Iterating through the array
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
        shapes[i]->computeArea();
        shapes[i]->computePerimeter();
        shapes[i]->display();
        cout << endl;
    }

    // Deleting objects to free memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i]; // Calls the destructor properly
    }

    return 0;
}





// #include <iostream>
// #include <cmath>
// using namespace std;

// // Base class: Shape
// class Shape {

//     protected:
//     double area, perimeter;

// public:
    
//     virtual void computeArea() = 0;       // Pure virtual function
//     virtual void computePerimeter() = 0;  // Pure virtual function
//     virtual void draw() {
//         cout << "Drawing a generic shape." << endl;
//     }
//     void display() {
//         cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
//     }
// };

// // Derived class: Circle
// class Circle : public Shape {
//     double radius;

// public:
//     Circle(double r) {
//         radius = r;
//     }

//     void computeArea() override {
//         area = M_PI * radius * radius;
//     }

//     void computePerimeter() override {
//         perimeter = 2 * M_PI * radius;
//     }

//     void draw() override { 
//         // Overriding draw() method
//         cout << "Drawing a Circle." << endl;
//     }
// };

// // Derived class: Triangle
// class Triangle : public Shape {
//     double a, b, c;

// public:
//     Triangle(double x, double y, double z) {
//         a = x;
//         b = y;
//         c = z;
//     }

//     void computeArea() override {
//         double s = (a + b + c) / 2; // Semi-perimeter
//         area = sqrt(s * (s - a) * (s - b) * (s - c));
//     }

//     void computePerimeter() override {
//         perimeter = a + b + c;
//     }

//     void draw() override { 
//         // Overriding draw() method
//         cout << "Drawing a Triangle." << endl;
//     }
// };

// // Derived class: Rectangle
// class Rectangle : public Shape {
//     double length, width;

// public:
//     Rectangle(double l, double w) {
//         length = l;
//         width = w;
//     }

//     void computeArea() override {
//         area = length * width;
//     }

//     void computePerimeter() override {
//         perimeter = 2 * (length + width);
//     }

//     void draw() override { 
//         // Overriding draw() method
//         cout << "Drawing a Rectangle." << endl;
//     }
// };

// // Main function
// int main() {
//     Circle c(5);
//     Triangle t(3, 4, 5);
//     Rectangle r(4, 6);

//     c.draw();
//     c.computeArea();
//     c.computePerimeter();
//     c.display();

//     t.draw();
//     t.computeArea();
//     t.computePerimeter();
//     t.display();

//     r.draw();
//     r.computeArea();
//     r.computePerimeter();
//     r.display();

//     return 0;
// }








