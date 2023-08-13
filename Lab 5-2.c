#include<stdio.h>
int main(){
int x,m,h;
scanf("%d",&x);
h=x/3600;
x=x-(h*3600);
m=x/60;
x=x-(m*60);

printf("%d:%d:%d\n",h,m,x);

return 0;
}
