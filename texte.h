#ifndef TEXTE_H
#define TEXTE_H
#include "figuregeometrique.h"

class Texte:public FigureGeometrique
{
protected:
  string txt;
public:
  Texte();
  Texte(Point & _originpt, unsigned int _colorindex, const string & _txt);
  Texte(Texte & _texte);
  void afficher();
  
  
  ~Texte();
  
  
};




#endif