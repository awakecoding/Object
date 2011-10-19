
#ifndef __SQUARE_H
#define __SQUARE_H

#include "Rectangle.h"

typedef struct square Square_t;

typedef void (*pSquare_SetSide)(Square_t* square, double side);

struct square
{
	Rectangle_t rectangle;

	size_t size;

	double side;

	pSquare_SetSide SetSide;
};

Square_t* Square_New();
void Square_Init(Square_t* square);
void Square_Free(Square_t* square);
double Square_GetArea(Square_t* square);
double Square_GetPerimeter(Square_t* square);
void Square_SetSide(Square_t* square, double side);

#endif /* __SQUARE_H */
