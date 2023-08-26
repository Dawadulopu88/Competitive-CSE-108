#include<stdio.h>

int main()
{
    float x;
    int i,c=0;
    for(i=1;i<=6;i++){
        scanf("%f",&x);
        if(x>0){
        c=c+1;
        }
    }
    printf("%d valores positivos\n",c);
    return 0;

}
