
#include "Rectangle.h"

oDefineConstructor(Rectangle);

oMethod(Rectangle, void, Init)
{
	rectangle->width = 0;
	rectangle->height = 0;

	oOverrideMethod(Rectangle, Shape, GetArea);
	oOverrideMethod(Rectangle, Shape, GetPerimeter);

	oRegisterMethod(Rectangle, SetWidth);
	oRegisterMethod(Rectangle, SetHeight);
}

oMethod(Rectangle, void, Free)
{
	Shape_Free((Shape_t*) rectangle);
}

oMethod(Rectangle, double, GetArea)
{
	return (rectangle->width * rectangle->height);
}

oMethod(Rectangle, double, GetPerimeter)
{
	return (2 * rectangle->width + 2 * rectangle->height);
}

oMethod(Rectangle, void, SetWidth, double width)
{
	rectangle->width = width;
}

oMethod(Rectangle, void, SetHeight, double height)
{
	rectangle->height = height;
}

oMethod(Rectangle, int, Equals, Rectangle_t* otherRectangle)
{
	int equals;

	equals = ((rectangle->width == otherRectangle->width) &&
		(rectangle->height == otherRectangle->height)) ? 1 : 0;

	return equals;
}
