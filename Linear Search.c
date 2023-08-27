#include<stdio.h>
int main (){
    int i;
int a[9]={10,50,30,70,80,60,20,90,40};
int size;
size=sizeof(a)/sizeof(a[0]);
printf("%d\n",size);
int key=20;

for(i=0;i<size;i++){
    if(a[i]==key){

printf("%d",i);
    }
}

return 0;
}
