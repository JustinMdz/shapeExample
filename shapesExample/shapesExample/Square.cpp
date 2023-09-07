#include "Square.h"

Square::Square(double squareSide)
{
	base = squareSide;
}

double Square::calculatePerimeter() const
{
	return SIDES_OF_SQUARE * base ;
}

double Square::calculateArea() const
{
	return base * base;
}

void Square::printDetails()
{
	cout << "I'm a square!" << endl
		<< "my perimiter is : " << calculatePerimeter() << endl
		<< "and my area is: " << calculateArea();
}
