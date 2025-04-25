#pragma once
#include <iostream>
#include <string>
using namespace std;

class BasicShapes
{
private:
	double area;
	string name;
public:
	
	string getname() const { return name; };
	double getarea() const { return area; };
	void setname(string name);
	void setarea(double area);
	virtual void calcArea() = 0;
	virtual ~BasicShapes();
};


class circle : public BasicShapes {

private:
	double xcenter;
	double ycenter;
	double radius;
public:
	circle(double x, double y, double r, string n = "circle");

	double getX() const { return xcenter; };
	double getY() const { return ycenter; };
	double getRadius() const { return radius; };
	void calcArea() override;
	~circle();
};

class rectangle : public BasicShapes {
private:
	double length;
	double width;
public:
	rectangle(double l, double w, string n = "rectangle");

		double getLength() const { return length; };
		double getWidth() const { return width;  };
		void calcArea() override;
		~rectangle();
};

class square : public rectangle {
private:
	double side;

public:
	square(double s, string n = "square");
	
	double getSide() const { return side; };
	~square();
};