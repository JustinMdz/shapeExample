#pragma once
#include "Shape.h"
class Triangle : public  Shape
{
private:

	double base;
	double high;
	double secondSide;
	double thirdSide;


public:
	Triangle(double,double,double,double);

	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};

