#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;
class Point{

protected:
  unsigned int x;
  unsigned int y;
  
public:
  Point();
  Point(int _x, int _y);
  Point(Point const & _sourcepoint);
  ~Point();
  int getx();
  int gety();
  void setx(int _x);
  void sety(int _y);
};

struct Otherpoint : public virtual Point
{
public:
  Otherpoint();
};
#endif