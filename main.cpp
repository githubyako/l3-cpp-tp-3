#include <iostream>
#include "point.h"
#include "figuregeometrique.h"
#include "segment.h"
#include "triangle.h"
#include "rectangle.h"

int main(int argc, char **argv) {
    cout << "Tests des constructeurs de point... \n\n";
    Point ptA;
    Point ptB(10,10);
    Point ptC = ptA;
    Point ptD(5,5);
    Point ptE(5,10);
    Point ptF(20,10);
    Point ptG(20,5);
    cout << "\n Tests des constructeurs de figure geom... \n\n";
    FigureGeometrique fig1;
    FigureGeometrique fig2(ptB,3);
    FigureGeometrique fig3 = fig1;
    
    cout << "\n Tests des constructeurs de segment... \n\n";
    
    Segment seg1;
    Segment seg2(ptA,ptB,2);
    Segment seg3=seg2;
    
    cout << "\n Tests des constructeurs de triangle... \n\n";
    
    Triangle tri1;
    Triangle tri2(ptA, ptB, ptD, 5);
    Triangle tri3(tri2);
    
    cout << "\n Tests des constructeurs de rectangle... \n\n";
    
    //Rectangle rec1;
    Rectangle rec2(ptD,ptE,ptF,ptG,3);
    cout << "\n\n";
    return 0;
}
