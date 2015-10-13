#include "triangle.h"

Triangle::Triangle():FigureGeometrique(), sommet2(), sommet3()
{
  cout << "Built Triangle from default constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";

}

Triangle::Triangle(Point& _originpoint, Point& _sommet2, Point& _sommet3, unsigned int _colorindex)
:FigureGeometrique(_originpoint,_colorindex), sommet2(_sommet2), sommet3(_sommet3)
{

  cout << "Built Triangle from specifier constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";

}

Triangle::Triangle(Triangle& _tri):FigureGeometrique(_tri.originpoint,_tri.colorindex), sommet2(_tri.sommet2), sommet3(_tri.sommet3)
{
  cout << "Built Triangle from copy constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";
}


Triangle::~Triangle()
{
  cout << "Destructeur de Triangle appelé.\n";
}

// METHODES

void Triangle::afficher()
{
  cout << "Type triangle. ";
  FigureGeometrique::afficher();
  cout << "Coords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety() << "].\n";
}

void Triangle::translation(Point& _vector)
{
  FigureGeometrique::translation(_vector);
  sommet2.setx(sommet2.getx()+_vector.getx());
  sommet2.sety(sommet2.gety()+_vector.gety());
  sommet3.setx(sommet3.getx()+_vector.getx());
  sommet3.sety(sommet3.gety()+_vector.gety());
}
