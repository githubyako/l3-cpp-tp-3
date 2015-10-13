#ifndef SEGMENT_H
#define SEGMENT_H
#include "figuregeometrique.h"

class Segment:public FigureGeometrique
{
protected:
  Point destpoint;
public:
  Segment();
  Segment(Point & _originpoint, Point & _destpoint, unsigned int _colorindex);
  Segment(Segment& _originseg);
  void afficher();
  
  ~Segment();

};


#endif