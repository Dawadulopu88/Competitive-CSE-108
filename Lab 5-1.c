#Include<stdio.h>
int main(){
int x,y;
scanf("%d",&x);
printf("%d\n",x);

printf("%d nota(s) de R$ 100,00\n",x/100);
y=x%100;
printf("%d nota(s) de R$ 50,00\n",y/50);
y=y%50;
printf("%d nota(s) de R$ 20,00\n",y/20);
y=y%20;
printf("%d nota(s) de R$ 10,00\n",y/10);
y=y%10;
printf("%d nota(s) de R$ 5,00\n",y/5);
y=y%5;
printf("%d nota(s) de R$ 2,00\n",y/2);
y=y%2;
printf("%d nota(s) de R$ 1,00\n",y/1);

return 0;
}
