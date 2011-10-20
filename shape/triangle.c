
#include <math.h>

#include <shape/triangle.h>

oDefineConstructor(Triangle);

oMethod(Triangle, void, Init)
{
	((Shape_t*) triangle)->GetArea = (pShape_GetArea) Triangle_GetArea;
	((Shape_t*) triangle)->GetPerimeter = (pShape_GetPerimeter) Triangle_GetPerimeter;

	triangle->IsScalene = Triangle_IsScalene;
	triangle->IsIsosceles = Triangle_IsIsosceles;
	triangle->IsEquilateral = Triangle_IsEquilateral;
}

oMethod(Triangle, void, Free)
{
	Shape_Free((Shape_t*) triangle);
}

oMethod(Triangle, double, GetArea)
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

oMethod(Triangle, double, GetPerimeter)
{
	return triangle->a + triangle->b + triangle->c;
}

oMethod(Triangle, int, IsScalene)
{
	return (triangle->a != triangle->b != triangle->c) ? 1 : 0;
}

oMethod(Triangle, int, IsIsosceles)
{
	return ((triangle->a == triangle->b) || (triangle->b == triangle->c) || (triangle->c == triangle->a)) ? 1 : 0;
}

oMethod(Triangle, int, IsEquilateral)
{
	return (triangle->a == triangle->b == triangle->c) ? 1 : 0;
}

oMethod(Triangle, void, SetSides, double a, double b, double c)
{
	triangle->a = a;
	triangle->b = b;
	triangle->c = c;
}
