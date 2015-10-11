#include "segment.h"
// ---------- CONSTRUCTEURS-----------------

Segment::Segment():FigureGeometrique(), Otherpoint()
{
  //originfig = new FigureGeometrique();
  //destinationpoint = new Point();
  cout << "Built Segment from default constructor.\nCoords are [x1=0 ,y1=0 ; x2=0, y2=0], color index is 0\n";
}
/*
Segment::Segment(FigureGeometrique & _fig, Point & _destpoint)
{
  originfig = _fig;
  destinationpoint = _destpoint;
  destinationpoint.setx(_destpoint.getx());
  destinationpoint.setx(_destpoint.getx());
  cout << "Built Segment from specifier constructor.\nCoords are [x1=" << originfig.getx() << ", y1=" << originfig.gety();
  cout << "; x2=" << destinationpoint.getx() << ", y2=" << destinationpoint.gety() << "], color index is " << originfig.getcolor() << ".\n";
}

Segment::Segment(Segment& _originseg)
{

}*/
