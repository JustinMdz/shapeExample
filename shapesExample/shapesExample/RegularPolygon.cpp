#include "RegularPolygon.h"

RegularPolygon::RegularPolygon(int sidesOfPolygon, double polygonSideLegnth, double polygonApotem)
{
	numberOfSides = sidesOfPolygon;
	side = polygonSideLegnth;
	apotem = polygonApotem;
}

double RegularPolygon::calculatePerimeter() const
{
	return numberOfSides * side;
}

double RegularPolygon::calculateArea() const
{
	return (((calculatePerimeter())*apotem)/2);
}

void RegularPolygon::printDetails()
{
	cout << "I'm a RegularPol!" << endl
		<< "my perimiter is : " << calculatePerimeter() << endl
		<< "and my area is: " << calculateArea();
}
