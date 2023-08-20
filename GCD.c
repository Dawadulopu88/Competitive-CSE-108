#include<stdio.h>
int gcd(int a, int b){
if(b==0){

    return a;
}

return gcd(b,a%b);
}
int main(){
int n=6;
int m=12;
printf("GCD of %d and %d is %d\n",n,m,gcd(n,m));



}
