#include "stdio.h"
#include "math.h"

struct tempo {
  int m;
  int s;
  int d;
};

void dtemp (struct tempo *p1, struct tempo *p2, struct tempo *p3) 
{ 

  int d = p2->d - p1->d; 
 
  int m1 = p1->m * 60;
  int m2 = p2->m * 60;
  
  if (d>=0) {
    int s = (m2 + p2->s) - (m1 + p1->s);
    p3->d = d;
    p3->m = s/60;
    p3->s = s%60;
  } else {
    int s = (m2 + p2->s) - (m1 + p1->s) - 1;
    p3->d = 100+d;
    p3->m = s/60;
    p3->s = s%60;
  }  
  
    if (p3->s < 0) p3->s *= -1;
  
    
    
}

int main(void) {
  
  struct tempo t1;
  struct tempo t2;
  struct tempo t3;
  
  scanf("%dm %ds %d",&t1.m, &t1.s, &t1.d);
  scanf("%dm %ds %d",&t2.m, &t2.s, &t2.d);
