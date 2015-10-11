#ifndef SEGMENT_H
#define SEGMENT_H
#include "figuregeometrique.h"

class Segment:public FigureGeometrique, public Otherpoint
{
protected:
  //FigureGeometrique & originfig;
  //Point & destinationpoint;
  
public:
  Segment();
  //Segment(FigureGeometrique & _fig, Point & _destpoint);
  //Segment(Segment& _originseg);


};


#endif