#pragma once
#include "Shape.h"

class Square : public  Shape
{

private:
	string name;
	int squareSides = 4;
	double base;
public:
	Square(string, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};