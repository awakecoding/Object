
#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "Shape.h"

typedef struct circle Circle_t;

struct circle
{
	Shape_t parent;

	double radius;
};

#define PI		3.141592654

Circle_t* Circle_New();
void Circle_Init(Circle_t* circle);
void Circle_Free(Circle_t* circle);
double Circle_GetArea(Circle_t* circle);
double Circle_GetPerimeter(Circle_t* circle);

#endif /* __CIRCLE_H */
