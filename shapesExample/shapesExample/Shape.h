#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
private:
	string name;
public:
	virtual double calculatePerimeter()const = 0;
	virtual double calculateArea()const = 0;
	virtual void printDetails()=0;
};