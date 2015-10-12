#include "segment.h"
// ---------- CONSTRUCTEURS-----------------

Segment::Segment():FigureGeometrique(), destpoint()
{
  //originfig = new FigureGeometrique();
  //destinationpoint = new Point();
  cout << "Built Segment from default constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << destpoint.getx() << ", y2=" << destpoint.gety() << "], color index is " << colorindex << ".\n";
}

Segment::Segment(Point& _originpoint, Point& _destpoint, unsigned int _colorindex):FigureGeometrique(_originpoint,_colorindex),destpoint(_destpoint)
{
  cout << "Built Segment from specifier constructor.\nCoords are [x1=" << _originpoint.getx() << ", y1=" << _originpoint.gety();
  cout << "; x2=" << destpoint.getx() << ", y2=" << destpoint.gety() << "], color index is " << _colorindex << ".\n";

}


Segment::Segment(Segment& _originseg):FigureGeometrique(_originseg.originpoint, _originseg.colorindex), destpoint(_originseg.destpoint)
{
  cout << "Built Segment from copy constructor.\nCoords are [x1=" << originpoint.getx() << ", y1=" << originpoint.gety();
  cout << "; x2=" << destpoint.getx() << ", y2=" << destpoint.gety() << "], color index is " << colorindex << ".\n";

}

Segment::~Segment()
{
  cout << "Destructeur de Segment appelé \n";
}
