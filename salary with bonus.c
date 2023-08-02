#include<stdio.h>
int main(){
char a;
double b,c,d;
scanf("%s%lf%lf",&a,&b,&c);
d=c*.15;
printf("TOTAL = R$ %.2lf\n",b+d);
return 0;

}
