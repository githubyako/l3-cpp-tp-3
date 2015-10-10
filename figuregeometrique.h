#ifndef FIGUREGEOMETRIQUE_H
#define FIGUREGEOMETRIQUE_H
#include "point.h"
class FigureGeometrique: public virtual Point
{
protected:
  unsigned int colorindex;
public:
  FigureGeometrique();
  FigureGeometrique(Point const & _originpoint, unsigned int _color);
  FigureGeometrique(FigureGeometrique const & _sourcefigure);
  ~FigureGeometrique();
};

#endif