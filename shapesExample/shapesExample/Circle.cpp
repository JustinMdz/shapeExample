#include "Circle.h"


Circle::Circle(string shapeName, double circleRadio, double numberPI) : Shape(shapeName)
{
	this->name = shapeName;
	this->radio = circleRadio;
	this->piNumber = numberPI;
}

double Circle::calculatePerimeter() const
{
	return 2 * piNumber * radio;
}

double Circle::calculateArea() const
{
	return piNumber * radio * radio;
}

void Circle::printDetails()
{
	cout << "My info as a " << name << ", are: \n";
	cout << "Perimeter: " << calculatePerimeter();
	cout << "\nArea: " << calculateArea() << endl << endl;
}
