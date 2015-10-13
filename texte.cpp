#include "texte.h"

Texte::Texte()
:FigureGeometrique(),txt()
{
  cout << "Built Texte from default constructor. Origin point coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ". String is: " << txt << "\n";
}

Texte::Texte(Point& _originpt, unsigned int _colorindex, const string& _txt)
:FigureGeometrique(_originpt,_colorindex),txt(_txt)
{
  cout << "Built Texte from specifier constructor. Origin point coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ". String is: " << txt << "\n";
}

Texte::Texte(Texte& _texte)
:FigureGeometrique(_texte.originpoint,_texte.colorindex),txt(_texte.txt)
{
  cout << "Built Texte from copy constructor. Origin point coords are x=" << originpoint.getx() << ", y=" << originpoint.gety() << ". String is: " << txt << "\n";
}





Texte::~Texte()
{
  cout << "Destructeur de Texte appelé\n";
}

// METHODES

void Texte::afficher()
{

}
