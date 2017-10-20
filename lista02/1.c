#include "stdio.h"
#include <math.h>

int main(void) {
     
    int x, result = 0;
    
    scanf("%d",&x);
    
    if ((x%2) == 0) {
      printf("%d\n",result);
    } else {
      result = result + 1;
      printf("%d\n",result);
    }
    
  


  return 0;
}