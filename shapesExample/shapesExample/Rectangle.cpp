#include "Rectangle.h"

Rectangle::Rectangle(string shapeName, double shapeBase, double shapeHeigh) : Square(shapeName,shapeBase)
{
	this->name = shapeName;
	this->base = shapeBase;
	this->heigh = shapeHeigh;
}

double Rectangle::calculatePerimeter() const
{
	return (2 * (base + heigh));
}

double Rectangle::calculateArea() const
{
	return base * heigh;
}

void Rectangle::printDetails()
{
	cout << "My info as a " << name << ", are: \n";
	cout << "Perimeter: " << calculatePerimeter();
	cout << "\nArea: " << calculateArea() << endl << endl;
}
