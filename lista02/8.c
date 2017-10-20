#include "stdio.h"
#include <math.h>

double acrescimos (double base, int hextra) 
{
   if (hextra<40) return ((base/(20*8)) + 40)*hextra;
   
   return ((base/(20*8))+40)*40;
}

double descontos (double base, int faltas) 
{
   return (base/20)*faltas;
}

double salario (double base, double bonus, double desc) 
{   
   return base + bonus - desc;
   
}

int main(void) {
     
  int cargo, faltas, hextra;
  double base, bonus, desc, valor;
  
  
  scanf("%d %d %d", &cargo, &faltas, &hextra);
  
  if (cargo == 1) {
    base = 10000;
    bonus = acrescimos(base, hextra);
    desc = descontos (base, faltas);
    printf("%.0f\n", salario (base, bonus, desc));
  }
  
  if (cargo == 2) {
    base = 8000;
    bonus = acrescimos(base, hextra);
    desc = descontos (base, faltas);
    printf("%.0f\n", salario (base, bonus, desc));
  }
  
  if (cargo == 3) {
    base = 5000;
    bonus = acrescimos(base, hextra);
    desc = descontos (base, faltas);
    printf("%.0f\n", salario (base, bonus, desc));
  }
  
  if (cargo == 4) {
    base = 3000;
    bonus = acrescimos(base, hextra);
    desc = descontos (base, faltas);
    printf("%.0f\n", salario (base, bonus, desc));
  }
  
  if (cargo == 5) {
    base = 2000;
    bonus = acrescimos(base, hextra);
    desc = descontos (base, faltas);
    printf("%.0f\n", salario (base, bonus, desc));
  }
  
  

  return 0;
}