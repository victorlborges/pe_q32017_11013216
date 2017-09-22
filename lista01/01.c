#include <stdio.h>
int main(){
    int valor;
    printf("Emtre com um valor");
    scanf("%d",&valor);
    
    if ((valor%2)==0) {
		printf("par\n");
    } else {
		printf("impar\n");
    }
  
    return 0;
}
