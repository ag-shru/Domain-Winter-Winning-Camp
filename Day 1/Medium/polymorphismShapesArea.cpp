#include <bits/stdc++.h>

using namespace std;

// Base class Shape
class Shape {
public:
    virtual void area() = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Derived class Circle
class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void area() override {
        cout << "Circle Area: " <<  fixed << setprecision(2) <<(3.14159 * radius * radius) << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}

    void area() override {
        cout << "Rectangle Area: " <<  fixed << setprecision(2) <<(length * breadth*1.0) << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    int base, height;

public:
    Triangle(int b, int h) : base(b), height(h) {}

    void area() override {
        cout << "Triangle Area: " <<  fixed << setprecision(2) <<(0.5 * base * height) << endl;
    }
};

int main() {
    int rad, len, bdt, base, ht;

    cout << "Radius = ";
    cin >> rad;
    cout << "Length = ";
    cin >> len;
    cout << "Breadth = ";
    cin >> bdt;
    cout << "Base = ";
    cin >> base;
    cout << "Height = ";
    cin >> ht;

    // Polymorphism using base class pointers
    Shape* shapes[3];
    shapes[0] = new Circle(rad);
    shapes[1] = new Rectangle(len, bdt);
    shapes[2] = new Triangle(base, ht);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->area();
        delete shapes[i]; // Clean up dynamically allocated memory
    }

    return 0;
}
