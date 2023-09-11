#include "Circle.h"

Circle::Circle(double circleRadio)
{
	radio = circleRadio;
}

double Circle::calculatePerimeter() const
{
    return (2 * PI_NUMBER * radio);
}

double Circle::calculateArea() const
{
    return (PI_NUMBER*(radio * radio));
}

void Circle::printDetails()
{
	cout << "I'm a Circle" << endl
		<< "my perimeter is : " << calculatePerimeter() << endl
		<< "and my area is: " << calculateArea();
}
