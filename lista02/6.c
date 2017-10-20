#include "stdio.h"
#include <math.h>

double delta (double a, double b, double c) 
{
  double eq = (pow(b,2) - 4*a*c);
  return eq;
}

double raiz1 (double a, double b, double c) 
{
  double eq = b*-1;
  double d = delta(a,b,c);
  
  eq += sqrt(d);
  eq /= 2*a;
  return eq;
}

double raiz2 (double a, double b, double c) 
{
  double eq = b*-1;
  eq -= sqrt(delta(a,b,c));
  eq /= 2*a;
  return eq;
}

double complexa1 (double a, double b, double c) 
{
  double eq = b*-1;
  eq -= sqrt(delta(a,b,c));
  eq /= 2*a;
  return eq;
}

double complexa2 (double a, double b, double c) 
{
  double eq = b*-1;
  eq -= sqrt(delta(a,b,c));
  eq /= 2*a;
  return eq;
}

double parteReal (double a, double b) 
{
  
  return (b*-1/2*a);
}

double parteImaginaria (double a, double d) 
{
  double delta = sqrt((d*-1));  
  return (delta/2*a);
}


int main(void) {
     
  double a, b, c, d, result1, result2;   
  
  
  scanf("%lf %lf %lf", &a, &b, &c);
  
  d = delta(a,b,c);
  
  if (d>0) {
     result1 = raiz2(a,b,c);
     result2 = raiz1(a,b,c);
     printf("%.2f %.2f\n",result1,result2); 
  } else {
    result1 = parteReal(a,b);
    result2 = parteImaginaria(a,d);
    printf("%.2f - %.2fi %.2f + %.2fi\n",result1,result2,result1,result2); 
  }
  
  return 0;
}
