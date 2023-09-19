#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	string name;
	double radio = 0.0;
	double piNumber = 0.0;
public:
	Circle(string, double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};