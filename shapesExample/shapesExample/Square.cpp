#include "Square.h"

Square::Square(string shapeName, double squareBase) : Shape(shapeName) {
	this->name = shapeName;
	this->base = squareBase;
}

double Square::calculatePerimeter() const
{
	return squareSides * base;
}

double Square::calculateArea() const
{
	return base * base;
}

void Square::printDetails()
{
	cout << "My info as a "<<name<<", are: \n";
	cout << "Perimeter: " << calculatePerimeter();
	cout << "\nArea: " << calculateArea() << endl<<endl;
}