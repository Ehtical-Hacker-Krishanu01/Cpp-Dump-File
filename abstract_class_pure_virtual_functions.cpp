#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for calculating area
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

int main(){
    Rectangle obj(3,4);

    return 0;
}