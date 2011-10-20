
#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include <shape/shape.h>

#define oTriangle_Self		triangle
#define oTriangle_Type		Triangle_t

oDeclareClass(Triangle);

oDeclareMethod(Triangle, int, IsScalene);
oDeclareMethod(Triangle, int, IsIsosceles);
oDeclareMethod(Triangle, int, IsEquilateral);
oDeclareMethod(Triangle, void, SetSides, double a, double b, double c);

oDefineClass(Triangle)
{
	oDefineParent(Shape);

	double a;
	double b;
	double c;

	oInstanceMethod(Triangle, IsScalene);
	oInstanceMethod(Triangle, IsIsosceles);
	oInstanceMethod(Triangle, IsEquilateral);
	oInstanceMethod(Triangle, SetSides);
};

Triangle_t* Triangle_New();
oMethod(Triangle, void, Init);
oMethod(Triangle, void, Free);

oMethod(Triangle, double, GetArea);
oMethod(Triangle, double, GetPerimeter);
oMethod(Triangle, int, IsScalene);
oMethod(Triangle, int, IsIsosceles);
oMethod(Triangle, int, IsEquilateral);
oMethod(Triangle, void, SetSides, double a, double b, double c);

#endif
