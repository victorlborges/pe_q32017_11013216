#include "stdio.h"
#include "stdlib.h"

int size(char * entrada) 
  {
    int n = 0;
  
    while(entrada[n]!='\0') n++;
  
    return n-1;
  }
  
char * inverte(char * entrada)
  {
    int n = 0;
    char * invertido;
    int tamanho = size(entrada);
    invertido = malloc(sizeof(char)*(tamanho));
    
    for ( int i=0; i<tamanho; ++i) {
      n = tamanho-1-i;
      invertido[n] = entrada[i];
      
    }
    
    return invertido;
  }
  
int main(void) {  
  
  char entrada [255] ;
  fgets (entrada, 255, stdin);
  
  printf("%s\n", inverte(entrada));
  
  return 0;
  
}