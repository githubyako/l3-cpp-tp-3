#include "figuregeometrique.h"

// -------- CONSTRUCTEURS ------------

FigureGeometrique::FigureGeometrique():Point(), colorindex(0)
{
  cout << "Built FigureGeometrique from default constructor. Coords are x=" << x << ", y=" << y << ", color index is " << colorindex << ".\n";
}

FigureGeometrique::FigureGeometrique(Point const & _originpoint, unsigned int _color):Point(_originpoint),colorindex(_color)
{
  
  cout << "Built FigureGeometrique from specifier constructor. Coords are x=" << x << ", y=" << y << ", color index is " << colorindex << ".\n";
}

FigureGeometrique::FigureGeometrique(const FigureGeometrique& _sourcefigure):Point(_sourcefigure), colorindex(_sourcefigure.colorindex)
{
  cout << "Built FigureGeometrique from copy constructor. Coords are x=" << x << ", y=" << y << ", color index is " << colorindex << ".\n";
}

FigureGeometrique::~FigureGeometrique()
{

}
