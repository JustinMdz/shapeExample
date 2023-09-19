#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "RegularPolygon.h"
#include "Rectangle.h"
#include "Ellipse.h"

const double static NUMBER_PI = 3.1416;

using namespace std;

int main() {
	Shape* shapeList[6];
	
	shapeList[0] = new Square("Square",125);
	shapeList[1] = new Triangle("Triangle", 10,15,10,10);
	shapeList[2] = new Circle("Circle",55.25,NUMBER_PI);
	shapeList[3] = new RegularPolygon("RegularPol",22.1,18,5);
	shapeList[4] = new Rectangle("Rectangle",20,10);
	shapeList[5] = new Ellipse("Ellipse", 20.5,NUMBER_PI,25.6);

	shapeList[0]->printDetails();
	shapeList[1]->printDetails();
	shapeList[2]->printDetails();
	shapeList[3]->printDetails();
	shapeList[4]->printDetails();
	shapeList[5]->printDetails();

	return 0;
}