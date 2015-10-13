#ifndef FIGUREGEOMETRIQUE_H
#define FIGUREGEOMETRIQUE_H
#include "point.h"
#include <typeinfo>

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
  void afficher();
  bool memeOrigine(FigureGeometrique & _fig2);
  void translation(Point & _vector);
};

#endif