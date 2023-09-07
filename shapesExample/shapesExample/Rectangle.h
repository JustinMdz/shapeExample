#pragma once
#include "Square.h"
const int static SIDES_AND_BASES = 2;
class Rectangle : public Square
{
private:
	double high;
public:

	Rectangle(double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};

