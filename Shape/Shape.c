
#include "Shape.h"

void Shape_New(Shape_t* shape)
{
	shape->size = sizeof(Shape_t);
}

void Shape_Free(Shape_t* shape)
{
	free(shape);
}

double Shape_GetArea(Shape_t* shape)
{
	return shape->GetArea(shape);
}

double Shape_GetPerimeter(Shape_t* shape)
{
	return shape->GetPerimeter(shape);
}
