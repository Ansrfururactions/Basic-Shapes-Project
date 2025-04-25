#include "BasicShapes.h"
#include <cmath>
using namespace std;


circle::circle(double x, double y, double r, string n): xcenter(x), ycenter(y), radius(r)
{
	setname(n);
	 calcArea();
	
}

void circle::calcArea()
{
	double a = 3.14 * radius;
	setarea(a);
}

circle::~circle()
{
}

rectangle::rectangle(double l, double w, string n) : length(l), width(w)
{
	setname(n);
	calcArea();
}

void rectangle::calcArea()
{
	double a = length * width;
	setarea(a);
}

rectangle::~rectangle()
{
}



square::square(double s, string n): rectangle(s, s, "square"), side(s)
{
	calcArea();
}

square::~square()
{
}

void BasicShapes::setname(string n)
{
	 name = n;
}

void BasicShapes::setarea(double a)
{
	area = a;
}

BasicShapes::~BasicShapes()
{
}
