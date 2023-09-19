#pragma once
#include <iostream>
using namespace std;

class Shape
{
private:
	string name;
public:
	Shape(string);
	virtual double calculatePerimeter()const = 0;
	virtual double calculateArea()const = 0;
	virtual void printDetails() = 0;
};