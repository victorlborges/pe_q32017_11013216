#include "stdio.h"
#include <math.h>

float fatorial (int x) 
{  
  if (x==0) return 1;
  
  
  return x*fatorial(x-1);
}

float binomial (int n, int k)
{
  int fn = fatorial(n);
  int fk = fatorial(k);
  int fz = fatorial(n-k);
  
  return fn/(fk*fz);
}
int main(void) {
     
  int n,k;   
  
  
  scanf("%d %d", &n, &k);
  
  printf("%.0f\n",binomial(n,k));  

  return 0;
}