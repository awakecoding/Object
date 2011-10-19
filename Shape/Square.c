
#include "Square.h"

Square_t* Square_New()
{
	Square_t* square;

	square = (Square_t*) malloc(sizeof(Square_t));

	Square_Init(square);

	return square;
}

void Square_Init(Square_t* square)
{
	Rectangle_Init((Rectangle_t*) square);

	square->size = sizeof(Square_t);

	square->side = 0;

	square->SetSide = Square_SetSide;
}

void Square_Free(Square_t* square)
{
	Rectangle_Free((Rectangle_t*) square);
}

double Square_GetArea(Square_t* square)
{
	return (square->side * square->side);
}

double Square_GetPerimeter(Square_t* square)
{
	return (4 * square->side);
}

void Square_SetSide(Square_t* square, double side)
{
	square->side = side;
	((Rectangle_t*) square)->width = side;
	((Rectangle_t*) square)->height = side;
}
