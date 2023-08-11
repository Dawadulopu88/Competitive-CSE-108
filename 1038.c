#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
float p;
if(x==1){
    p=4.00*y;
}else if(x==2){
p=4.50*y;
}else if(x==3){
p=5.00*y;
}else if(x==4){
p=2.00*y;
}else if(x==5){
p=1.50*y;
}
printf("Total: R$ %.2f\n",p);
return 0;
}
