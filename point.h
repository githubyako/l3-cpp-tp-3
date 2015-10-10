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
};

//struct Otherpoint : Point{};
#endif