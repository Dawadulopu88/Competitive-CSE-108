#include<stdio.h>
int c;
int fib(int n){
    c++;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else {
    return fib(n-1)+fib(n-2);
    }
}
int main(){
    int i,x,y;
    scanf("%d",&x);
    for(i=0;i<x;i++){
            scanf("%d",&y);
            c=0;
            printf("fib(%d) = %d calls = %d\n",y,c-1,fib(y));
    }
    return 0;
}
