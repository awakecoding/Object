
#include <stdio.h>

#include <shape/shape.h>
#include <shape/square.h>
#include <shape/circle.h>
#include <shape/triangle.h>
#include <shape/rectangle.h>

int main(int argc, char* argv[])
{
	Square_t* square;
	Circle_t* circle;
	Triangle_t* triangle;
	Rectangle_t* rectangle;

	rectangle = Rectangle_New();

	Rectangle_SetWidth(rectangle, 3);
	Rectangle_SetHeight(rectangle, 4);

	printf("Rectangle.GetArea() = %f\n", Shape_GetArea((Shape_t*) rectangle));
	printf("Rectangle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) rectangle));

	circle = Circle_New();

	circle->radius = 3.5;

	printf("Circle.GetArea() = %f\n", Shape_GetArea((Shape_t*) circle));
	printf("Circle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) circle));

	triangle = Triangle_New();
	Triangle_SetSides(triangle, 2, 3, 4);

	printf("Triangle.GetArea() = %f\n", Shape_GetArea((Shape_t*) triangle));
	printf("Triangle.GetPerimeter() = %f\n", Shape_GetPerimeter((Shape_t*) triangle));

	printf("Triangle.IsScalene() = %s\n", Triangle_IsScalene(triangle) ? "true" : "false");
	printf("Triangle.IsIsosceles() = %s\n", Triangle_IsIsosceles(triangle) ? "true" : "false");
	printf("Triangle.IsEquilateral() = %s\n", Triangle_IsEquilateral(triangle) ? "true" : "false");

	square = Square_New();
	square->SetSide(square, 4);

	printf("Rectangle.Equals(square) = %s\n", Rectangle_Equals(rectangle, (Rectangle_t*) square) ? "true" : "false");

	rectangle->SetWidth(rectangle, 4);
	rectangle->SetHeight(rectangle, 4);
	printf("Rectangle.Equals(square) = %s\n", Rectangle_Equals(rectangle, (Rectangle_t*) square) ? "true" : "false");

	Rectangle_Free(rectangle);
	Triangle_Free(triangle);
	Circle_Free(circle);

	return 0;
}
