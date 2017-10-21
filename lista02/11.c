#include "stdio.h"
#include <math.h>

float DB (int valor, int i) 
{  
  if (valor/2 == 0) return (valor%2)*i;
  
  return (valor%2)*i + DB(valor/2,10*i);
}

float BD (int valor, int i) 
{ 
  if (valor/10 == 0) return valor*pow(2,i);
   
  return (valor%10)*pow(2,i) + BD(valor/10,i+1);
}

int main(void) {
     
  int tipo, valor;   
  
  
  scanf("%d %d", &valor, &tipo);
  
  if (tipo == 2) printf("%.0f\n",BD(valor,0));
  if (tipo == 1) printf("%.0f\n",DB(valor,1));  

  return 0;
}