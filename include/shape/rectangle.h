
#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include <shape/shape.h>

#define oRectangle_Self		rectangle
#define oRectangle_Type		Rectangle_t

oDeclareClass(Rectangle);

oDeclareMethod(Rectangle, void, SetWidth, double width);
oDeclareMethod(Rectangle, void, SetHeight, double height);

oDefineClass(Rectangle)
{
	oDefineParent(Shape);

	double width;
	double height;

	oInstanceMethod(Rectangle, SetWidth);
	oInstanceMethod(Rectangle, SetHeight);
};

Rectangle_t* Rectangle_New();
oMethod(Rectangle, void, Init);
oMethod(Rectangle, void, Free);

oMethod(Rectangle, double, GetArea);
oMethod(Rectangle, double, GetPerimeter);
oMethod(Rectangle, void, SetWidth, double width);
oMethod(Rectangle, void, SetHeight, double height);
oMethod(Rectangle, int, Equals, Rectangle_t* otherRectangle);

#endif /* __RECTANGLE_H */
