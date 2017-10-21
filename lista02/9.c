#include "stdio.h"

double potencia(int base, int exp)
{ 
   if (exp == 1) return base;
   return base*(potencia(base,exp-1));
}

int main(void) {
  int base, exp;
  scanf("%d %d", &base, &exp);
  printf("%.0f\n", potencia(base,exp));
  return 0;
}