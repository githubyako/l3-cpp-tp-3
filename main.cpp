#include "segment.h"
#include "triangle.h"
#include "rectangle.h"
#include "texte.h"

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
    
    Rectangle rec1;
    Rectangle rec2(ptD,5,6,3);
    Rectangle rect3(rec2);
    Rectangle rec4(ptG,7,7,5);    
    cout << "\n Tests des constructeurs de texte... \n\n";
    
    Texte text1;
    Texte text2(ptE,4,"string de text2 ouais ouais");
    Texte text3(text2);
    
    cout << "\n Tests de la méthode afficher.. \n\n";
    
    ptE.afficher();
    text2.afficher();
    tri3.afficher();
    seg2.afficher();
    rec2.afficher();
    
    cout << "Test de la méthode memeOrigine\n\n";
    
    cout << text1.memeOrigine(seg3) << "\n";
    cout << rec2.memeOrigine(text3) << "\n";
    
    cout << "Test de la méthode translation\n\n";
    
    rec2.afficher();
    rec2.translation(ptG);
    rec2.afficher();
    
    cout << "Test de la méthode estcarré\n\n";
    
    cout << rec2.estcarre() << "\n";
    cout << rec4.estcarre() << "\n";
    
    cout << "\n\n";
    return 0;
}
