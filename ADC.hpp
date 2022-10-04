#ifndef ADC_HPP
#define ADC_HPP
using namespace std;
#include <iostream>
class ADC{
	private:				      //Encapsulamiento (como caja negra)
    float _lectura;     //Variable para la lectura
    float _resfin;      //Variable para la lectura en digital
		int _resolucion;		//Resolucion deseada
    int _chan;          //Variable para la seleccion de canal
		int _num;           //Variable numero
    static int n_canales;			//ATRIBUTO DE LA CLASE
public:
    char _opcion;       //Variable para eleccion
    float _frec;        //Frecuencia deseada
    int _ack;           //Variable para el factor ACK
  
//Constructores
	ADC(char, int ,float,float,int, int, int); 
	ADC();
/****************Mostrar datos****************/
	 void muestraDatos();
/****************Capturador*************/
	virtual	void captura();
/*****************Getters***************/ 
		int getRes();								
		float getFrec();
		static int getn_canales();
};
#endif
/*KSTK*/