#include "segment.h"
// ---------- CONSTRUCTEURS-----------------

Segment::Segment():FigureGeometrique(), Point()
{
  cout << "Built Segment from default constructor.\nCoords are [x1=0 ,y1=0 ; x2=0, y2=0], color index is 0\n";
}
/*
Segment::Segment(FigureGeometrique& _fig, Point& _destpoint):originfig(_fig)
{
  destinationpoint = new Point();
  cout << "Built Segment from specifier constructor.\nCoords are [x1=" << originfig.x << ", y1=" << originfig.y;
  cout << "; x2=" << destinationpoint.x << ", y2=" << destinationpoint.y << "], color index is " << originfig.colorindex << ".\n";
}

Segment::Segment(Segment& _originseg)
{

}*/
