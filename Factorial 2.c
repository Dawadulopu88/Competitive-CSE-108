#include<stdio.h>
int fac(int a){
if(a==0||a==1){
return 1;
}else{
return a*fac(a-1);
}


}
int main(){
int a,result;
printf("a=");
scanf("%d",&a);
result=fac(a);
printf("%d!=%d\n",a,result);

return 0;

}
