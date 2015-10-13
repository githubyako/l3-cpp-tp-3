#include "figuregeometrique.h"

// -------- CONSTRUCTEURS ------------

FigureGeometrique::FigureGeometrique():originpoint(), colorindex(0)
{
  cout << "Built FigureGeometrique from default constructor. Coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ", color index is " << colorindex << ".\n";
}

FigureGeometrique::FigureGeometrique(Point const & _originpoint, unsigned int _color):originpoint(_originpoint),colorindex(_color)
{
  
  cout << "Built FigureGeometrique from specifier constructor. Coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ", color index is " << colorindex << ".\n";
}

FigureGeometrique::FigureGeometrique(const FigureGeometrique& _sourcefigure):originpoint(_sourcefigure.originpoint), colorindex(_sourcefigure.colorindex)
{
  cout << "Built FigureGeometrique from copy constructor. Coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ", color index is " << colorindex << ".\n";
}
// --------- GETTERS ----------

int FigureGeometrique::getcolor()
{
  return colorindex;
}



// --------- SETTERS ----------

void FigureGeometrique::setcolor(int _newcolor)
{
  colorindex = _newcolor;
}

FigureGeometrique::~FigureGeometrique()
{
  cout << "Destructeur de FigureGeometrique appelé\n";
}

// METHODES

void FigureGeometrique::afficher()
{
  cout << "Point d'origine [" << originpoint.getx() << "," << originpoint.gety() << "], de couleur " << colorindex << ".\n";
}

bool FigureGeometrique::memeOrigine(FigureGeometrique& _fig2)
{
  if (originpoint.getx()==_fig2.originpoint.getx() && originpoint.gety()==_fig2.originpoint.gety())
    return true;
  else
    return false;
}

void FigureGeometrique::translation(Point& _vector)
{
  originpoint.setx(originpoint.getx()+_vector.getx());
  originpoint.sety(originpoint.gety()+_vector.gety());
}
