#include<stdio.h>
int main(){
    int n,x,y,i,j;
    int sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            for(j=y+1,sum=0;j<x;j++){
            if(j%2!=0){
                    sum=sum+j;
                }
            }
        }else if(x<=y){
            for(j=x+1,sum=0;j<y;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
