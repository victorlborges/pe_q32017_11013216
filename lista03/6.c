#include "stdio.h"
#include "stdlib.h"

int cmpfunc ( const void *a , const void *b ) 
{
 
  return ( *(int*)a - *(int*)b );
}

float calc_mediana (int *vetor, int tamanho)
{
  float med;
  int t1 = 0;
  int t2 = 0;
  if ((tamanho % 2) == 0) {
    t1 = tamanho/2;
    t2 = (tamanho/2)-1;
    med = vetor[t1] + vetor[t2];
    return med/2;
  } else {
     t1 = tamanho/2;
    med = vetor[t1];
    return med;
  }
}
  
int main(void) {  
  int n;
  scanf("%d",&n);
  float mediana; 

  int *vetor = malloc(sizeof(int)*(n));
 
  for (int i=0; i<n; ++i) {
    scanf("%d",&vetor[i]);
  }
  
  qsort ( vetor, n, sizeof(int), cmpfunc) ;
  
  mediana = calc_mediana(vetor, n);
  printf("%.2f\n", mediana);
  
  free(vetor);
  
  return 0;
  
}