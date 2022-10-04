#include <iostream>
#include <stdlib.h>
#include "lect.hpp"
using namespace std;
/*********************************
Builder
*********************************/
Lect::Lect(char opcion, int resolucion,float frec,float frec_mod,int chan, int num, int ack): ADC(opcion,resolucion,frec,frec_mod,chan,num,ack){}
Lect::Lect():ADC(){}
void Lect::captura(){
  ADC::captura();
  if(_opcion=='b'){
    back:
    cout<<"Introduzca el factor ACK deseado (2,4,8,16,32,64)"<<endl;
    cin>>_ack;
    if( _ack!=2 && _ack!=4 && _ack!=8 && _ack!=16 && _ack!=32 &&_ack!=64){
  cout<<"Factor ACK no soportado, volver a introducirlo"<<endl;
    goto back;
  }
}
  }
/*KSTK*/