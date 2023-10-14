#include <stdio.h>

int main(){

    int n;
    int x, y, aux;
    int soma;

    while(1){

                scanf("%d%d",&x,&y);
                if(x <= 0) break;
                if(y <= 0) break;

                if(x > y){
                     aux = x;
                     x = y;
                     y = aux;
                }
                soma = 0;
                for(int i = x; i <= y; i++){
                       printf("%d ",i);
                       soma += i;
                }
                printf("Sum=%d\n",soma);

    }
    return 0;
}


