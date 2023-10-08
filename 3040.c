#include<stdio.h>
int main(){
int n,h,d,g,i;
scanf("%d",&n);
for(i=0;i<n;++i){
    scanf("%d %d %d",&h,&d,&g);
    if(h>=200 && h<=300)
        if(d>=50)
    if(g>=150){
        puts("Sim");
        continue;
    }
    puts("Nao");
}
return 0;
}
