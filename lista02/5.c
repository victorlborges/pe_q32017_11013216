#include "stdio.h"
#include <math.h>

float fatorial (int n) 
{
  if (n==0) return 1;
  return fatorial(n-1)*n;
}

float binomial (int n, int k) 
{
  float eq = fatorial(n) / (fatorial(k)*fatorial(n-k));
  return eq;
}


int main(void) {
     
  int n, k;   
  float result;
  
  scanf("%d %d", &n, &k);
  result = binomial(n,k);
  printf("%.0f\n",result);
  return 0;
}