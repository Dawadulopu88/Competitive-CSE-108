#include<stdio.h>
void printNumber(int s, int e){
if(s<e){
return;//Base case
}
printf("%d\n",s);
printNumber(s-1,e);//recursive case
}
int main(){
int s=10;
int e=1;
printf("Numbers from %d to %d:\n",s,e);
printNumber(s,e);
return 0;
}

