
#include "Shape.h"

oDefineConstructor(Shape);

oMethod(Shape, void, Init)
{

}

oMethod(Shape, void, Free)
{
	free(shape);
}

oMethod(Shape, double, GetArea)
{
	return shape->GetArea(shape);
}

oMethod(Shape, double, GetPerimeter)
{
	return shape->GetPerimeter(shape);
}
