#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"
#include "figuregeometrique.h"

class Rectangle:public FigureGeometrique
{
protected:
  Point sommet2;
  Point sommet3;
  Point sommet4;
public:  
  Rectangle();  
  Rectangle(Point & _originpoint, Point & _sommet2, Point & _sommet3, Point & _sommet4, unsigned int _colorindex);
  Rectangle(Rectangle & _rec);
  ~Rectangle();
};

#endif