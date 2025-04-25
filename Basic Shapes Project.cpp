#include "BasicShapes.h"
#include <iostream>
#include <iomanip>

int main()
{
    BasicShapes* shapes[] = {new circle (1.1, 2.3, 10.1, "circle1"), new circle(3.3, 2.1, 14.9, "circle2"), new rectangle(12.1, 33.3, "rectangle1"), new rectangle (33.11, 11.9, "rectangle2"), new square(14.5, "square")};

    for (int I = 0; I < 5; I++)
    {
        cout << shapes[I]->getname() << ": " << endl;
        cout <<"area: " << shapes[I]->getarea() << endl;

    }
    delete *shapes;
}

 