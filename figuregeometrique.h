#ifndef FIGUREGEOMETRIQUE_H
#define FIGUREGEOMETRIQUE_H
#include "point.h"
class FigureGeometrique
{
protected:
  unsigned int colorindex;
  Point originpoint;
public:
  FigureGeometrique();
  FigureGeometrique(Point const & _originpoint, unsigned int _color);
  FigureGeometrique(FigureGeometrique const & _sourcefigure);
  ~FigureGeometrique();
  int getcolor();
  void setcolor(int _newcolor);
};

#endif