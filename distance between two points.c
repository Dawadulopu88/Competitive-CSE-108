#include<stdio.h>
int main (){
double a,b,c,d,x,y;
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
x=pow(c-a,2)+pow(d-b,2);
y=sqrt(x);
printf("%.4lf\n",y);
return 0;
}
