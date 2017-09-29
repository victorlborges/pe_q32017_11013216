#include <stdio.h>
int main(){
    int x;
    int y;
    int i;
    int exponencial=1;
    printf("Emtre com um valor x e y\n");
    scanf("%d %d",&x,&y);
    
    for ( i=1; i<=y; ++i ) {
      exponencial = exponencial*x;
    }
    printf("%d\n",exponencial);
    return 0;
}