#pragma once
#include "Shape.h"
class Square : public  Shape
{
	static const int SIDES_OF_SQUARE = 4;
private:
	double base;
public:
	Square(double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};


