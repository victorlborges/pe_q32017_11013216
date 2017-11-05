#include "stdio.h"
#include "stdlib.h"

int** transpor(int matriz[3][3])
{
   int ** matrizt = malloc(sizeof(int *)*3);
   for (int i=0; i<3; i++) {
    matrizt[i] = malloc(sizeof(int)*3);
   }  
   
  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
       matrizt[i][j] = matriz[j][i];
    }
 }
  
  return matrizt;
}

  
int main(void) {  
  
  int matriz [3][3];
 
  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
    scanf("%d",&matriz[i][j]);
    }
  }
 

  int **matrizt = transpor(matriz);
 
  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
    printf("%d ",matrizt[i][j]);
    }
    printf("\n");
  }
 
  for (int i=0;i<3;i++) {
    free(matrizt[i]);
  }
  free(matrizt);

 
  return 0;
  
}