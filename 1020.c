#include<stdio.h>
int main(){
int d,m,y;
scanf("%d",&d);
y=d/365;
d=d-(y*365);
m=d/30;
d=d-(m*30);
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

return 0;
}
