
#include <shape/square.h>

oDefineConstructor(Square);

oMethod(Square, void, Init)
{
	Rectangle_Init((Rectangle_t*) square);

	square->side = 0;

	square->SetSide = Square_SetSide;
}

oMethod(Square, void, Free)
{
	Rectangle_Free((Rectangle_t*) square);
}

oMethod(Square, double, GetArea)
{
	return (square->side * square->side);
}

oMethod(Square, double, GetPerimeter)
{
	return (4 * square->side);
}

oMethod(Square, void, SetSide, double side)
{
	square->side = side;
	((Rectangle_t*) square)->width = side;
	((Rectangle_t*) square)->height = side;
}
