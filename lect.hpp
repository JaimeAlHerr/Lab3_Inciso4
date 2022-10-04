#ifndef lect_HPP
#define lect_HPP
#include<iostream>
#include "ADC.hpp"
using namespace std;

class Lect: public ADC{
  private:

  public:
    Lect(char, int, float, float, int,int, int);
    Lect();
   void captura ();
};
#endif
/*KSTK*/