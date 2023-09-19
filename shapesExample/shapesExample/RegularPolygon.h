#pragma once
#include "Shape.h"
class RegularPolygon : public Shape
{

private:
	string name;
	double side;
	double apotem;
	int numberOfSide;
	
public:
	RegularPolygon(string, double,double,int);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};