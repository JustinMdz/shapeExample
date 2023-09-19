#pragma once
#include "Circle.h"
#include <cmath>
class Ellipse : public Circle
{
private:
	string name;
	double minRadio = 0.0;
	double piNumber = 0.0;
	double maxRadio = 0.0;
	
public:
	Ellipse(string, double, double, double);
	double calculatePerimeter() const override;
	double calculateArea()const override;
	void printDetails();
};