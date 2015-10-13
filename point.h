#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;
class Point{

protected:
  int x;
  int y;
  
public:
  Point();
  Point(int _x, int _y);
  Point(Point const & _sourcepoint);
  ~Point();
  int getx();
  int gety();
  void setx(int _x);
  void sety(int _y);
  void afficher();
  void translation(Point& _vector);
};

#endif