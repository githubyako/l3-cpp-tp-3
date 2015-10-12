#include "point.h"


// --------------CONSTRUCTEURS---------------
Point::Point():x(0), y(0)
{
  cout << "Built Point from default constructor. Coords are 0,0.\n";
}

Point::Point(int _x, int _y):x(_x),y(_y)
{
  cout << "Built Point from specifier constructor. Coords are x=" << x << ", y=" << y << ".\n";
}

Point::Point(const Point& _sourcepoint):x(_sourcepoint.x),y(_sourcepoint.y)
{
  cout << "Built Point from copy constructor. Coords are x=" << x << ", y=" << y << ".\n";
}

// ----------DESTRUCTOR-----------

Point::~Point()
{
  cout << "Destructeur de Point appelé\n";
}

// -----------GETTERS-----------

int Point::getx()
{
  return x;
}

int Point::gety()
{
  return y;
}

// ------- SETTERS -------------

void Point::setx(int _x)
{
  x = _x;
}

void Point::sety(int _y)
{
  y = _y;
}
