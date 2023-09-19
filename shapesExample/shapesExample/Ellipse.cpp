#include "Ellipse.h"

Ellipse::Ellipse(string shapeName, double shapeMinRadio, double numberPI, double shapeMaxRadio) : Circle(shapeName, minRadio, piNumber)
{
	this->name = shapeName;
	this->minRadio = shapeMinRadio;
	this->piNumber = numberPI;
	this->maxRadio = shapeMaxRadio;
}
double Ellipse::calculatePerimeter() const
{
	return (piNumber* (3 * (maxRadio + minRadio) -
		sqrt((3 * maxRadio + minRadio) * (maxRadio + 3 * minRadio))));
}

double Ellipse::calculateArea() const
{
	return (piNumber * maxRadio * minRadio);
}

void Ellipse::printDetails()
{
	cout << "My info as a " << name << ", are: \n";
	cout << "Perimeter: " << calculatePerimeter();
	cout << "\nArea: " << calculateArea() << endl << endl;
}
