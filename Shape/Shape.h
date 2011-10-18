
#ifndef __SHAPE_H
#define __SHAPE_H

#include <stdlib.h>

typedef struct shape Shape_t;

typedef double (*pShape_GetArea)(Shape_t* shape);
typedef double (*pShape_GetPerimeter)(Shape_t* shape);

struct shape
{
	size_t size;

	pShape_GetArea GetArea;
	pShape_GetPerimeter GetPerimeter;
};

void Shape_New(Shape_t* shape);
void Shape_Free(Shape_t* shape);
double Shape_GetArea(Shape_t* shape);
double Shape_GetPerimeter(Shape_t* shape);

#endif /* __SHAPE_H */
