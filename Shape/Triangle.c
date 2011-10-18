
#include <math.h>

#include "Triangle.h"

Triangle_t* Triangle_New()
{
	Triangle_t* triangle;

	triangle = (Triangle_t*) malloc(sizeof(Triangle_t));

	triangle->size = sizeof(Triangle_t);

	((Shape_t*) triangle)->GetArea = (pShape_GetArea) Triangle_GetArea;
	((Shape_t*) triangle)->GetPerimeter = (pShape_GetPerimeter) Triangle_GetPerimeter;

	triangle->IsScalene = Triangle_IsScalene;
	triangle->IsIsoceles = Triangle_IsIsosceles;
	triangle->IsEquilateral = Triangle_IsEquilateral;

	return triangle;
}

void Triangle_Free(Triangle_t* triangle)
{
	Shape_Free((Shape_t*) triangle);
}

double Triangle_GetArea(Triangle_t* triangle)
{
	double s;
	double area;
	double a, b, c;	

	a = triangle->a; /* Side A */
	b = triangle->b; /* Side B */
	c = triangle->c; /* Side C */

	s = Triangle_GetPerimeter(triangle) / 2; /* semiperimeter */

	area = sqrt(s * (s - a) * (s - b) * (s - c)); /* Heron's Formula */

	return area;
}

double Triangle_GetPerimeter(Triangle_t* triangle)
{
	return triangle->a + triangle->b + triangle->c;
}

int Triangle_IsScalene(Triangle_t* triangle)
{
	return (triangle->a != triangle->b != triangle->c) ? 1 : 0;
}

int Triangle_IsIsosceles(Triangle_t* triangle)
{
	return ((triangle->a == triangle->b) || (triangle->b == triangle->c) || (triangle->c == triangle->a)) ? 1 : 0;
}

int Triangle_IsEquilateral(Triangle_t* triangle)
{
	return (triangle->a == triangle->b == triangle->c) ? 1 : 0;
}
