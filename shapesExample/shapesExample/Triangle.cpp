#include "Triangle.h"

Triangle::Triangle(string shapeName, double tBase, double tHeight,
    double tSecondSide, double tThirdSide) : Shape(shapeName)
{
    this->name = shapeName;
    this->base = tBase;
    this->secondSide = tSecondSide;
    this->thirdSide = tThirdSide;
    this->height = tHeight;
}

double Triangle::calculatePerimeter() const
{
    return (base + secondSide + thirdSide);
}

double Triangle::calculateArea() const
{
    return (base*height)/2;
}

void Triangle::printDetails()
{
    cout << "My info as a " << name << ", are: \n";
    cout << "Perimeter: " << calculatePerimeter();
    cout << "\nArea: " << calculateArea() << endl << endl;
}