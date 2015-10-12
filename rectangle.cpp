#include "rectangle.h"

Rectangle::Rectangle():FigureGeometrique(), sommet2(), sommet3(), sommet4()
{
  cout << "Built rectangle from default constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
  cout << "; x3=" << sommet4.getx() << ", y4=" << sommet4.getx() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";
}

Rectangle::Rectangle(Point& _originpoint, Point& _sommet2, Point& _sommet3, Point& _sommet4, unsigned int _colorindex)
//:FigureGeometrique(_originpoint,_colorindex),sommet2(_sommet2),sommet3(_sommet3),sommet4(_sommet4)
{
//  if((_originpoint.getx()==_sommet2.getx() && _sommet3.getx()==_sommet4.getx() && 
//    _originpoint.gety()==_sommet4.gety() && _sommet2.gety()==sommet3.gety())
//    || (_originpoint.gety()==_sommet2.gety() && _sommet3.gety()==_sommet4.gety() &&
//    _originpoint.getx()==sommet4.getx() && sommet2.getx()==sommet3.getx()))
//  {
    FigureGeometrique(_originpoint,_colorindex);
    sommet2 = _sommet2;
    sommet3 = _sommet3;
    sommet4 = _sommet4;
    colorindex = _colorindex;
    
    cout << "Built rectangle from specifier constructor.\nCoords are [x1=" << _originpoint.getx() << ", y1=" << _originpoint.gety();
    cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
    cout << "; x4=" << sommet4.getx() << ", y4=" << sommet4.gety() << "]\n"; 
    cout << "Color index is " << colorindex << ".\n";
/*  
  }else{
    cout << "Points invalides pour la création d'un rectangle.";
  }
  */

}

Rectangle::Rectangle(Rectangle& _rec)
:FigureGeometrique(_rec.originpoint,_rec.colorindex),sommet2(_rec.sommet2),sommet3(_rec.sommet3),sommet4(_rec.sommet4)
{
  cout << "Built rectangle from copy constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << sommet2.getx() << ", y2=" << sommet2.gety() << "; x3=" << sommet3.getx() << ", y3=" << sommet3.gety();
  cout << "; x3=" << sommet4.getx() << ", y4=" << sommet4.getx() << "]\n"; 
  cout << "Color index is " << colorindex << ".\n";
  
}


Rectangle::~Rectangle()
{
  cout << "Destructeur de rectangle appelé\n";
}
