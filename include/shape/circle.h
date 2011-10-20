
#ifndef __CIRCLE_H
#define __CIRCLE_H

#include <shape/shape.h>

#define oCircle_Self		circle
#define oCircle_Type		Circle_t

oDeclareClass(Circle);

oDefineClass(Circle)
{
	oDefineParent(Shape);

	double radius;
};

Circle_t* Circle_New();
oMethod(Circle, void, Init);
oMethod(Circle, void, Free);

oMethod(Circle, double, GetArea);
oMethod(Circle, double, GetPerimeter);

#endif /* __CIRCLE_H */
