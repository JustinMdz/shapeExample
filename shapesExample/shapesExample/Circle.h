#pragma once
#include "Shape.h"
//NOTE: Dont create global const in this part, instead of use main file
const double static PI_NUMBER = 3.14159265358979323846;
class Circle : public  Shape
{
private:
	double radio;
public:
	Circle(double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};

