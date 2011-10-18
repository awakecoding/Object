
#include "Rectangle.h"

Rectangle_t* Rectangle_New()
{
	Rectangle_t* rectangle;

	rectangle = (Rectangle_t*) malloc(sizeof(Rectangle_t));

	rectangle->size = sizeof(Rectangle_t);

	rectangle->width = 0;
	rectangle->height = 0;

	((Shape_t*) rectangle)->GetArea = (pShape_GetArea) Rectangle_GetArea;
	((Shape_t*) rectangle)->GetPerimeter = (pShape_GetPerimeter) Rectangle_GetPerimeter;

	return rectangle;
}

void Rectangle_Free(Rectangle_t* rectangle)
{
	Shape_Free((Shape_t*) rectangle);
}

double Rectangle_GetArea(Rectangle_t* rectangle)
{
	return (double) (rectangle->width * rectangle->height);
}

double Rectangle_GetPerimeter(Rectangle_t* rectangle)
{
	return (double) (2 * rectangle->width + 2 * rectangle->height);
}
