#include <stdio.h>
int main(){
    int x;
    int i=1;
    int fatorial = 1;
    printf("Emtre com um valor x\n");
    scanf("%d",&x);
    
    while (x>0) {
      fatorial = fatorial*x;
      x = x-1;
    } 
    printf("%d\n",fatorial);
      
    return 0;
}