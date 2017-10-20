#include "stdio.h"
#include <math.h>

int palindromo (int valor, int size)
{ 
   if (valor/10 == 0) return valor;
  
   return ((valor%10)*pow(10,size-1) + palindromo(valor/10, size-1));
}

int tamanho (int valor)
{ int i = 0;
  while(valor>0) {
    ++i;
    valor = valor/10;
  }
  return i;
}

int main(void) {
     
  int n;   
  
  scanf("%d", &n);
  
  int size = tamanho(n);
  int valor = palindromo (n,size);
  if (n==valor) printf("sim\n");
  else printf("nao\n"); 

  return 0;
}