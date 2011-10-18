
#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "Shape.h"

typedef struct triangle Triangle_t;

typedef int (*pTriangle_IsScalene)(Triangle_t* triangle);
typedef int (*pTriangle_IsIsosceles)(Triangle_t* triangle);
typedef int (*pTriangle_IsEquilateral)(Triangle_t* triangle);

struct triangle
{
	Shape_t parent;

	size_t size;

	double a;
	double b;
	double c;

	pTriangle_IsScalene IsScalene;
	pTriangle_IsIsosceles IsIsoceles;
	pTriangle_IsEquilateral IsEquilateral;
};

#define PI		3.141592654

Triangle_t* Triangle_New();
void Triangle_Free(Triangle_t* triangle);
double Triangle_GetArea(Triangle_t* triangle);
double Triangle_GetPerimeter(Triangle_t* triangle);
int Triangle_IsScalene(Triangle_t* triangle);
int Triangle_IsIsosceles(Triangle_t* triangle);
int Triangle_IsEquilateral(Triangle_t* triangle);

#endif