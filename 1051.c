#include<stdio.h>
int main(){
double x;
scanf("%lf",&x);
if(x<=2000.00)
    printf("Isento\n");
else if(x>2000.00&&x<=3000.00)
    printf("R$ %.2lf\n",(x-2000.00)*.08);
else if(x>3000.00&&x<=4500.00)
    printf("R$ %.2lf\n",(x-3000.00)*.18+1000.00*.08);
else if(x>=4500.01)
    printf("R$ %.2lf\n",((x-4500.00)*.28 + 1500.00*.18 + 1000.00*.08));

return 0;
}
