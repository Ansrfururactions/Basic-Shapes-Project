#include "BasicShapes.h"
using namespace std;


circle::circle(double x, double y, double r, string n)
{
	setname();
}

double circle::calcArea()
{
	return 0.0;
}

rectangle::rectangle(double l, double w, string n)
{

}



square::square(double s, string n)
{
}

void BasicShapes::setname()
{
	name = n;
}

void BasicShapes::setarea()
{
}
