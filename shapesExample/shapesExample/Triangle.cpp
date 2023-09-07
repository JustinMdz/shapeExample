#include "Triangle.h"

Triangle::Triangle(double triangleBase, double triangleHigh, double triangleSecondSide, double triangleThirdSide)
{
	base = triangleBase;
	high = triangleHigh;
	secondSide = triangleSecondSide;
	thirdSide = triangleThirdSide;
}

double Triangle::calculatePerimeter() const
{
	return base+secondSide+thirdSide;
}

double Triangle::calculateArea() const
{
	return (base*high)/2;
}

void Triangle::printDetails()
{
	cout << "I'm a triangle!"<<endl
		<< "my perimiter is : " << calculatePerimeter() << endl
		<<"and my area is: " << calculateArea();
}