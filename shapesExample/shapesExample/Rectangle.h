#pragma once
#include "Square.h"
class Rectangle : public Square
{
private:
	string name;
	double base;
	double heigh;
public:

	Rectangle(string, double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};