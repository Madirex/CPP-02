#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

void testPoint(Point const a, Point const b, Point const c, Point const p, const std::string& pointName)
{
	std::cout << "Point " << pointName << "(" << p.getX() << ", " << p.getY() << "): ";
	if (bsp(a, b, c, p))
	{
		std::cout << "is INSIDE the triangle." << std::endl;
	}
	else
	{
		std::cout << "is OUTSIDE the triangle." << std::endl;
	}
}

int main(void)
{
	Point const a(0.0f, 0.0f);
	Point const b(10.0f, 0.0f);
	Point const c(5.0f, 10.0f);

	std::cout << "Triangle vertices are A(0,0), B(10,0), C(5,10)" << std::endl << std::endl;

	testPoint(a, b, c, Point(5.0f, 5.0f), "P1 (Inside)");
	testPoint(a, b, c, Point(10.0f, 10.0f), "P2 (Outside)");
	testPoint(a, b, c, Point(5.0f, 0.0f), "P3 (On edge)");
	testPoint(a, b, c, Point(0.0f, 0.0f), "P4 (On vertex A)");
	testPoint(a, b, c, Point(2.5f, 5.0f), "P5 (On edge AC)");

	return 0;
}
