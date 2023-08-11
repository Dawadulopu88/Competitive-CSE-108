#include<stdio.h>
int main()
{
    float a,b,c,p,r;
    scanf("%f%f%f",&a,&b,&c);

    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        r=.5*(a+b)*c;
        printf("Area = %.1f\n",r);
    }
    return 0;
}
