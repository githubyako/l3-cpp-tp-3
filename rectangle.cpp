#include "rectangle.h"

Rectangle::Rectangle():FigureGeometrique(), sommet2(), sommet3(), sommet4()
{
  cout << "Built rectangle from default constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
  cout << "; x3=" << sommet4.getx() << ", y4=" << sommet4.getx() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";
}

Rectangle::Rectangle(Point& _originpoint, unsigned int largeur, unsigned int hauteur, unsigned int _colorindex)
:FigureGeometrique(_originpoint,_colorindex),sommet2(_originpoint.getx()+largeur, _originpoint.gety()), sommet3(_originpoint.getx()+largeur,_originpoint.gety()-hauteur),
sommet4(_originpoint.getx(), _originpoint.gety()-hauteur)
{
    cout << "Built rectangle from specifier constructor.\nCoords are [x1=" << _originpoint.getx() << ", y1=" << _originpoint.gety();
    cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
    cout << "; x4=" << sommet4.getx() << ", y4=" << sommet4.gety() << "]\n"; 
    cout << "Color index is " << colorindex << ".\n";
}


Rectangle::Rectangle(Rectangle& _rec)
:FigureGeometrique(_rec.originpoint,_rec.colorindex),sommet2(_rec.sommet2),sommet3(_rec.sommet3),sommet4(_rec.sommet4)
{
  cout << "Built rectangle from copy constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
  cout << "; x3=" << sommet4.getx() << ", y4=" << sommet4.gety() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";
  
}


Rectangle::~Rectangle()
{
  cout << "Destructeur de rectangle appelé\n";
}


// METHODES

void Rectangle::afficher()
{

}
