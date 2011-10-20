
#ifndef __SHAPE_H
#define __SHAPE_H

#include <stdlib.h>

#include <object.h>

#define oShape_Self		shape
#define oShape_Type		Shape_t

oDeclareClass(Shape);

oDeclareMethod(Shape, double, GetArea);
oDeclareMethod(Shape, double, GetPerimeter);

oDefineClass(Shape)
{
	oInstanceMethod(Shape, GetArea);
	oInstanceMethod(Shape, GetPerimeter);
};

oMethod(Shape, void, Init);
oMethod(Shape, void, Free);

oMethod(Shape, double, GetArea);
oMethod(Shape, double, GetPerimeter);

#define PI		3.14159265358979323846

#endif /* __SHAPE_H */
