#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,x,g,h;
scanf("%lf%lf%lf",&a,&b,&c);
if(((b*b)-4*a*c)<0||a==0){
printf("Impossivel calcular\n");
}else{
x=sqrt((b*b)-4*a*c);
g=((-b+x)/(2*a));
h=((-b-x)/(2*a));
printf("R1 = %.5lf\nR2 = %.5lf\n",g,h);
}
return 0;
}
