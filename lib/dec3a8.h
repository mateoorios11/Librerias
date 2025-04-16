 
#ifdef DEC3A8_h
#define DECA3A8_h
#include "Arduino.h"
int i=0, val=0;
void DEC3A8_init();
RCC->APB2ENR|=RCC_APB2ENR_IOPBEN;
RCC->APB2ENR|=RCC_APB2ENR_IOPBEN;
void DEC3A8(int i0, int i1, int i3);
/*void Ent_Sal();// Entradas y Salidas
int Lectura(int pin);//leer pin*/


#endif