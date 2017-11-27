#include "stdio.h"
#include "math.h"

struct ponto3d {
  float x;
  float y;
  float z;
};

float dist (struct ponto3d p1, struct ponto3d p2) 
{
  float x = pow((p2.x - p1.x), 2);
  float y = pow((p2.y - p1.y), 2);
  float z = pow((p2.z - p1.z), 2);
  
  return sqrt(x+y+z);
  
}

int main(void) {
  
  struct ponto3d p1;
  struct ponto3d p2;
  
  scanf("%f , %f , %f", &p1.x, &p1.y, &p1.z);
  scanf("%f , %f , %f", &p2.x, &p2.y, &p2.z);
  
  printf("%.2f\n",dist(p1,p2));
  
  return 0;
}