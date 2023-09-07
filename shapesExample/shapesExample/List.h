#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "RegularPolygon.h"
#include "Square.h"
#include "Triangle.h"

const int SHAPES = 7;
class List
{
private: 

	Shape* shapeList;

public:
	List();
	void fillShapeList();
	void printShapeList();
};

