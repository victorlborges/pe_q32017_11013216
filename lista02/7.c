#include "stdio.h"
#include <math.h>

float CK (float valor) 
{
   return valor + 273.15;
}

float CF (float valor)
{
   return valor*1.8 + 32;
}

float FC (float valor) 
{
   return (valor-32)/1.8;
}

float KC (float valor)
{
   return valor - 273.15;
}


float DB (float valor) 
{  int decimal = valor;
   int temp = 0;
   float bin=0;
   int i = 1;
   while (decimal>0) {
     temp = decimal%2;
     decimal = decimal/2;
     bin += temp*i;
     i = i*10;
   
   }
   return bin;
}

float BD (float valor) 
{ 
  int i=0;
  int bin = valor;
  float temp = 0;
  float decimal;
  for (i=0; bin>0; ++i)  {
    temp = bin%10;
    bin = bin/10;
    decimal += temp*pow(2,i);
    
  }  
  return decimal;
}

int main(void) {
     
  float tipo, entrada, saida, valor;   
  
  
  scanf("%f %f %f %f", &tipo, &entrada, &saida, &valor);
  
  if (tipo == 1) {
      if (entrada == 1) {
        if (saida == 1) printf("%.2f C\n", valor);
        if (saida == 2) printf("%.2f F\n", CF(valor));
        if (saida == 3) printf("%.2f K\n", CK(valor));
      }  
      if (entrada == 2) {
        if (saida == 1) printf("%.2f C\n", FC(valor));
        if (saida == 2) printf("%.2f F\n", valor);
        if (saida == 3) printf("%.2f K\n", CK(FC(valor)));
      }  
      if (entrada == 3) {
        if (saida == 1) printf("%.2f C\n", KC(valor));
        if (saida == 2) printf("%.2f F\n", CF(KC(valor)));
        if (saida == 3) printf("%.2f K\n", valor);
      }  
  }
  
  if (tipo == 2) {
      if (entrada == 1) {
        if (saida == 1) printf("%.0f\n", valor);
        if (saida == 2) printf("%.0f\n", DB(valor));
      }  
      if (entrada == 2) {
        if (saida == 1) printf("%.0f\n", BD(valor));
        if (saida == 2) printf("%.0f\n", valor);
      } 
  }
  
  return 0;
}