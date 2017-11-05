#include "stdio.h"
int main(void) {
  int size(char * entrada) 
  {
    int n = 0;
  
    while(entrada[n]!='\0') n++;
  
    return n;
  }
  
  int cont_vogal(char * entrada)
  { 
    int cont = 0;
    int tamanho = size(entrada);
    
    for (int i = 0; i<tamanho; ++i) {
      if (entrada[i] == 'a') ++cont;
      if (entrada[i] == 'e') ++cont;
      if (entrada[i] == 'i') ++cont;
      if (entrada[i] == 'o') ++cont;
      if (entrada[i] == 'u') ++cont;
    }  
    
    return cont;
  }
  
  char entrada [255] ;
  fgets (entrada, 255, stdin);
  
  printf("%d\n", cont_vogal(entrada));
  
  return 0;
  
}


