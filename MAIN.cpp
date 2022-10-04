/***********************************************************************
 // Description:     Laboratorio 3_Inciso4
 // Author:         Jaime Alejandro Herrera Armendáriz
 // Updated:         2022/09/30
 //Link de Replit: https://replit.com/@JaimeHerreraArm/Laboratorio3Inciso4#main.cpp
************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "ADC.hpp"
#include "lect.hpp"
using namespace std;
void Introduccion();
/************************************************
   MAIN
************************************************/
int main(int argc, char** argv) {
  Introduccion();
  int num;
  char opcion;
  int resta;

  start:
    std::cout<<"Introduzca el numero de canales(1-32)"<<std::endl;
      cin>> num;
      if(num>32||num<1){
        cout<<"El numero de canales no puede ser mayor a 32 ni menor a 1"<<std::endl;
      goto start;
      }
  	std::cout<<"Se han activado  "<<num<<"  canales"<<std::endl;	
	  Lect a[num];
	  for (int i=0;i<num;i++){
		  int j=i;
	    cout<<endl<<"  - Canal #: "<<i+1<<" -";
		  a[j].captura();
		}
	  for (int i=0;i<num;i++){
		  a[i].muestraDatos();
    }
return 0;
}
void Introduccion(void){
	printf("\n\t Tecnologico Nacional de Mexico");
	printf("\n\t Instituto Tecnologico de Chihuahua");
	printf("\n\t Ingenieria Electronica");
	printf("\n\t Sistemas Embebidos Inteligentes");
	printf("\n\t Arquitectura de Programacion para Hardware");
	printf("\n\t Docente: M.C. Alfredo Chacon");
	printf("\n\t Alumno: Jaime Alejandro Herrera Armendariz");
	printf("\n\t No. de control: 19060748"); 
	printf("\n\n\t Lab_3_Herencia y polimorfismo");
	printf("\n\n");
  
}
/*KSTK*/