#include<stdio.h>
isPrime(int x)
{
    int i;
    for(i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x;
    scanf("%d",&x);
    int tp1=0,tp2=0;
    int i;
    for(i=x; i>=5; i--)
    {
        if(isPrime(i)&&isPrime(i-2))
        {
            tp1=i-2;
            tp2=i;
            break;
        }
    }
    printf("%d %d\n",tp1,tp2);
    return 0;
}


