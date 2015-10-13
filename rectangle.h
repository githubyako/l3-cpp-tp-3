#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figuregeometrique.h"

class Rectangle:public FigureGeometrique
{
protected:
  Point sommet2;
  Point sommet3;
  Point sommet4;
public:  
  Rectangle();  
  Rectangle(Point & _originpoint, unsigned int largeur, unsigned int hauteur, unsigned int _colorindex);
  Rectangle(Rectangle & _rec);
  void afficher();
  ~Rectangle();
};

#endif