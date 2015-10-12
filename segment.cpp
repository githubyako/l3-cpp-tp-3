#include "segment.h"
// ---------- CONSTRUCTEURS-----------------

Segment::Segment():FigureGeometrique(), destpoint()
{
  //originfig = new FigureGeometrique();
  //destinationpoint = new Point();
  cout << "Built Segment from default constructor.\nCoords are [x1=0 ,y1=0 ; x2=0, y2=0], color index is 0\n";
}

Segment::Segment(Point& _originpoint, Point& _destpoint, unsigned int _colorindex):FigureGeometrique(_originpoint,_colorindex),destpoint(_destpoint)
{
  cout << "Built Segment from specifier constructor.\nCoords are [x1=" << _originpoint.getx() << ", y1=" << _originpoint.gety();
  cout << "; x2=" << destpoint.getx() << ", y2=" << destpoint.gety() << "], color index is " << _colorindex << ".\n";

}


/*Segment::Segment(Segment& _originseg):destpoint(_originseg.destpoint)
{
}*/

Segment::~Segment()
{
  cout << "Destructeur de Segment appelé \n";
}
