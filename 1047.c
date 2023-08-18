#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d%d%d%d",&a,&b,&c,&d);
e=((c*60)+d)-((a*60)+b);
if(e<=0)
    e=e+(24*60);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e/60,e%60);

return 0;
}
