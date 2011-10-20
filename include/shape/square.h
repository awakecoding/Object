
#ifndef __SQUARE_H
#define __SQUARE_H

#include <shape/rectangle.h>

#define oSquare_Self		square
#define oSquare_Type		Square_t

oDeclareClass(Square);

oDeclareMethod(Square, void, SetSide, double side);

struct square
{
	oDefineParent(Rectangle);

	double side;

	oInstanceMethod(Square, SetSide);
};

Square_t* Square_New();
oMethod(Square, void, Init);
oMethod(Square, void, Free);

oMethod(Square, double, GetArea);
oMethod(Square, double, GetPerimeter);
oMethod(Square, void, SetSide, double side);

#endif /* __SQUARE_H */
