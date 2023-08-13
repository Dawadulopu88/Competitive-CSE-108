#include<stdio.h>
int main (){
    int i,n,a=0,b=0,c=0,d=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            a=a+1;
        }
        if(n%2!=0){
            b=b+1;
        }
        if(0<n){
            c=c+1;
        }
        if(0>n){
            d=d+1;
        }

   }        printf("%d valor(es) par(es)\n",a);
            printf("%d valor(es) impar(es)\n",b);
            printf("%d valor(es) positivo(s)\n",c);
            printf("%d valor(es) negativo(s)\n",d);

            return 0;
}
