#include<stdio.h>
int main (){
int n,i,prime;
scanf("%d",&n);
prime=1;
for(i=2;i<=n/2;i++)
 if(n%i==0)
    prime=0;
 if(prime== 1 && n!=0 && n!=1)
    printf("The number %d is prime",n);

else
 printf("The number %d is not prime",n);


return 0;
}
