#include <iostream>
#include "point.h"
#include "figuregeometrique.h"
#include "segment.h"
int main(int argc, char **argv) {
    cout << "Tests des constructeurs de point... \n\n";
    Point ptA;
    Point ptB(10,10);
    Point ptC = ptA;
    
    cout << "\n Tests des constructeurs de figure geom... \n\n";
    FigureGeometrique fig1;
    FigureGeometrique fig2(ptB,3);
    FigureGeometrique fig3 = fig1;
    
    cout << "\n Tests des constructeurs de segment... \n\n";
    
    Segment seg1;
    return 0;
}
