#include "stdio.h"
#include <math.h>

int main(void) {
     
    float x,y,z,result = 0;
    
    
    scanf("%f %f %f",&x, &y, &z);
    
    result = x*y*z;
    
    printf("%.2f\n",result);
    
    return 0;
}