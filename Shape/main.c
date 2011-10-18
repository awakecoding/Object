
#include <stdio.h>
#include <windows.h>

#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

int main(int argc, char* argv[])
{
	Circle_t* circle;
	Triangle_t* triangle;
	Rectangle_t* rectangle;

	rectangle = Rectangle_New();

	rectangle->width = 3;
	rectangle->height = 5;

	printf("Rectangle.GetArea() = %f\n", Shape_GetArea((Shape_t*) rectangle));
	printf("Rectangle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) rectangle));

	circle = Circle_New();

	circle->radius = 3.5;

	printf("Circle.GetArea() = %f\n", Shape_GetArea((Shape_t*) circle));
	printf("Circle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) circle));

	triangle = Triangle_New();

	triangle->a = 2;
	triangle->b = 3;
	triangle->c = 4;

	printf("Triangle.GetArea() = %f\n", Shape_GetArea((Shape_t*) triangle));
	printf("Triangle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) triangle));

	printf("Triangle.IsScalene() = %s\n", Triangle_IsScalene(triangle) ? "true" : "false");
	printf("Triangle.IsIsosceles() = %s\n", Triangle_IsIsosceles(triangle) ? "true" : "false");
	printf("Triangle.IsEquilateral() = %s\n", Triangle_IsEquilateral(triangle) ? "true" : "false");

	Rectangle_Free(rectangle);
	Triangle_Free(triangle);
	Circle_Free(circle);

	system("pause");

	return 0;
}
