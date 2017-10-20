#include "stdio.h"
#include <math.h>

float soma (float x,float y)
{ 
  return x+y;
}

float subtrai (float x,float y)
{
  return x-y;
}

float multplica (float x,float y)
{
  return x*y;
}

float divide (float x,float y)
{
  return x/y;
}

float potencia (float x,float y)
{
  return pow(x,y);
}


int main(void) {
     
    int opcao;
    float x,y,result;
    
   
    scanf("%d %f %f",&opcao,&x,&y);
    
    if (opcao==1) result = soma(x,y);
    else if (opcao==2) result = subtrai(x,y);
    else if (opcao==3) result = multplica(x,y);
    else if (opcao==4) result = divide(x,y);
    else if (opcao==5) result = potencia(x,y);
    
    printf("%.0f\n",result);

  return 0;
}