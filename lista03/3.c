#include "stdio.h"
#include "stdlib.h"

int* somar(int *v1, int *v2)
{
  int *v3;
  v3 = malloc(sizeof(int)*5);
  
  for (int i=0; i<5; ++i) {
   v3[i] = v1[i] + v2[i];
 } 
  
  return v3;
}

  
int main(void) {  
  
 int v1 [5];
 int v2 [5];
 
 
 for (int i=0; i<5; ++i) {
   scanf("%d",&v1[i]);
 }
 
  for (int i=0; i<5; ++i) {
   scanf("%d",&v2[i]);
 }
 
 int *v3 = somar(v1,v2);
 
 for (int i=0; i<4; ++i) {
  printf("%d ",v3[i]);
 }
  printf("%d\n",v3[4]);
  return 0;
  
}

