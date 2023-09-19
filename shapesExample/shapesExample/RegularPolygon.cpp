#include "RegularPolygon.h"


RegularPolygon::RegularPolygon(string shapeName, double lenghtOfSide, double apotemLength, int regularPolSides) 
	: Shape(shapeName)
{
	this->name = shapeName;
	this->side = lenghtOfSide;
	this->apotem = apotemLength;
	this->numberOfSide = regularPolSides;
}

double RegularPolygon::calculatePerimeter() const
{
	return side * numberOfSide;
}

double RegularPolygon::calculateArea() const
{
	return ((calculatePerimeter() * apotem)/2);
}

void RegularPolygon::printDetails()
{
	cout << "My info as a " << name << ", are: \n";
	cout << "Perimeter: " << calculatePerimeter();
	cout << "\nArea: " << calculateArea() << endl << endl;
}