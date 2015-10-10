#ifndef SEGMENT_H
#define SEGMENT_H
#include "figuregeometrique.h"

class Segment:public virtual FigureGeometrique, public virtual Point
{
  FigureGeometrique * originfig;
  Point * destinationpoint;
  
public:
  Segment();
  //Segment(FigureGeometrique& _fig, Point& _destpoint);
  //Segment(Segment& _originseg);

  
};


#endif