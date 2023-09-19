#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
	string name;
	double base = 0.0;
	double height = 0.0;
	double secondSide = 0.0;
	double thirdSide = 0.0;
public:

	Triangle(string, double, double, double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};

