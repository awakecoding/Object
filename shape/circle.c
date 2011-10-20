
#include <shape/circle.h>

oDefineConstructor(Circle);

oMethod(Circle, void, Init)
{
	circle->radius = 0;

	((Shape_t*) circle)->GetArea = (pShape_GetArea) Circle_GetArea;
	((Shape_t*) circle)->GetPerimeter = (pShape_GetPerimeter) Circle_GetPerimeter;
}

oMethod(Circle, void, Free)
{
	Shape_Free((Shape_t*) circle);
}

oMethod(Circle, double, GetArea)
{
	return circle->radius * (PI * PI);
}

oMethod(Circle, double, GetPerimeter)
{
	return 2 * PI * circle->radius;
}
