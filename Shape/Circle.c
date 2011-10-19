
#include "Circle.h"

Circle_t* Circle_New()
{
	Circle_t* circle;

	circle = (Circle_t*) malloc(sizeof(Circle_t));

	Circle_Init(circle);

	return circle;
}

void Circle_Init(Circle_t* circle)
{
	circle->radius = 0;

	((Shape_t*) circle)->GetArea = (pShape_GetArea) Circle_GetArea;
	((Shape_t*) circle)->GetPerimeter = (pShape_GetPerimeter) Circle_GetPerimeter;
}

void Circle_Free(Circle_t* circle)
{
	Shape_Free((Shape_t*) circle);
}

double Circle_GetArea(Circle_t* circle)
{
	return circle->radius * (PI * PI);
}

double Circle_GetPerimeter(Circle_t* circle)
{
	return 2 * PI * circle->radius;
}
