#include<stdio.h>
int main(){

int a,b;
float c,d;
scanf("%d%d%f",&a,&b,&c);
d=b*c;
int e,f;
float g,h;
scanf("%d%d%f",&e,&f,&g);
h=f*g;
printf("VALOR A PAGAR: R$ %.2f\n",d+h);

return 0;
}
