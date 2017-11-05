#include "stdio.h"
#include "stdlib.h"

int validar (int *v1, int num, int size, int posicao)
{
  int contador = 0;
  for (int i = posicao-1; i>=0; i=i-1) {
    if (num == v1[i]) ++contador;
  }
  return contador;
  
}
int repetido(int *v1, int num, int size, int posicao)
{ 
  int contador = 0;
  int repetido = validar(v1, num, size, posicao);
  if (repetido==0) {
    for (int i=0; i<size; ++i) {
   
    if (num == v1[i]) ++contador;
  }

  return contador;
}
else
  return 0;
}  

  
int main(void) {  
  
  int n;
  int contador = 0;
  scanf("%d",&n);
  int num;

  int *v1 = malloc(sizeof(int)*(n));
 
  for (int i=0; i<n; ++i) {
    scanf("%d",&v1[i]);
  }
  
  for (int i=0; i<n; ++i) {
    contador = repetido(v1, v1[i], n, i);
    if (contador > 1) printf("%d-%d ", v1[i], contador);
  } 
  printf("\n");
  free(v1);
  
  return 0;
  
}