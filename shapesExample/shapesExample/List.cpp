#include "List.h"

List::List()
{
	shapeList = new Shape[SHAPES];
}

void List::fillShapeList()
{
	
}

void List::printShapeList()
{
	for (int index = 0; index < SHAPES; index++) {
		shapeList[index].printDetails();
	}
}