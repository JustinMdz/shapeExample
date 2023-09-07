#pragma once
#include "Shape.h"
class RegularPolygon : public  Shape
{
private:
	double side;
	double apotem;
	int numberOfSides;

public:
	RegularPolygon(int, double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();

};