#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"
#include "figuregeometrique.h"

class Triangle:public FigureGeometrique
{
protected:
  Point sommet2;
  Point sommet3;
public:
  Triangle();
  Triangle(Point & _originpoint, Point & _sommet2, Point & _sommet3, unsigned int _colorindex);
  Triangle(Triangle & _tri);
  
  ~Triangle();
};



















#endif