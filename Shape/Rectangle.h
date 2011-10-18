
#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "Shape.h"

typedef struct rectangle Rectangle_t;

struct rectangle
{
	Shape_t parent;

	size_t size;

	double width;
	double height;
};

Rectangle_t* Rectangle_New();
void Rectangle_Free(Rectangle_t* rectangle);
double Rectangle_GetArea(Rectangle_t* rectangle);
double Rectangle_GetPerimeter(Rectangle_t* rectangle);

#endif /* __RECTANGLE_H */
