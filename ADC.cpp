#include <iostream>
#include <stdlib.h>
#include "ADC.hpp"
using namespace std;

/************************************************
    DECLARACION DEL CONSTRUCTOR (INICIALIZA ATRIBUTOS DEL OBJETO)
************************************************/
ADC::ADC(char opcion, int resolucion,float frec,float frec_mod,int chan, int num, int ack){
  
	_resolucion= resolucion;
	_frec= frec;
  _opcion=opcion;
  _ack=ack;
  _chan=chan;
  n_canales++;
  _num=n_canales;

}

ADC::ADC(){
  _chan=0;
  
	_resolucion=0;
	_frec=0;
  n_canales++;
	_num=n_canales;
	std::cout<<"Se ha activado el canal AN "<<_num<<std::endl;
}
/************************************************
    METODOS
************************************************/
void ADC::muestraDatos(){
	cout<<endl<<"** Imprimiendo Datos **"<<endl;
	cout<<"Canal #"<<_chan<<endl;
	cout<<"Resolucion: "<<_resolucion<<endl;
    if(_opcion=='a'){
    	cout<<"Frecuencia: "<<_frec<<endl;
  }
  if(_opcion=='b'){
    _frec=8000000/_ack;
    	cout<<"Frecuencia: "<<_frec<<endl;
  }
  cout<<"Lectura:"<<_lectura<<endl;
  cout<<"Lectura en digital:"<<_resfin<<endl;
  }
/************************************************
    SETTER
************************************************/

/***********************************************
    Capturador
***********************************************/
void ADC::captura(){
  again:
	cout<<endl<<"** Introduce Datos **"<<endl;
  cout<<"Introduzca el numero del canal a usar (1-32):"<<endl;
  cin>>_chan;
  if(_chan>32||_chan<1){
    cout<<"Numero de canal invalido, favor de reintroducir"<<endl;
    goto again;
  }
	haki:
	cout<<"Introduzca la resolucion: (8,10,12) ";
	cin>> _resolucion;
	if(_resolucion!=8&&_resolucion!=10&&_resolucion!=12){
		cout<<"El valor de la resolucion solo puede ser uno de los 3 mencionados"<<endl;
		goto haki;
	}

  rezero:
  cout<<"Introduzca la lectura: ";
	cin>> _lectura;
  if (_lectura<0||_lectura>3.3){
    cout<<"El valor de lectura solo acepta valores en el rango de 0 hasta 3.3V"<<endl;
    goto rezero;
  }
   if(_resolucion==8){
    _resfin=(_lectura*255)/3.3;
  }
   if(_resolucion==10){
     _resfin=(_lectura*1023)/3.3;
   }
   if(_resolucion==12){
     _resfin=(_lectura*4095)/3.3;
   }
    cout<<"Seleccione como funcionara la frecuencia"<<endl;
  cout<<"Opcion a) Frecuencia especificada"<<endl;
  cout<<"Opcion b) Frecuencia con factor ACK"<<endl;
  cin>>_opcion;
  if(_opcion=='a'){
    	cout<<"Dame la frecuencia: ";
	cin>> _frec;
  }
}
/************************************************
    GETTER
************************************************/
int ADC::getRes(){
	return _resolucion;
}
float ADC::getFrec(){
	return _frec;
}
int ADC::getn_canales(){
	return n_canales;
}
/************************************************
    Inicializacion de cuenta
************************************************/
int ADC::n_canales=0;
/*KSTK*/