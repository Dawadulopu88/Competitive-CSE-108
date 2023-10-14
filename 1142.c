#include<stdio.h>
int main(){

        int N,i;

        scanf("%d", &N);

        for(i = 0; i < N*4;){
            printf("%d %d %d PUM\n",(i+1),(i+2),(i+3));
            i+=4;
    }
     return 0;
}
