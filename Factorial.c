#include<stdio.h>
int fac(int a){

    if(a==1)
    {
        return 1;
    }
    else
    {
        return  a * fac(a - 1);
    }

}
    int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",fac(a));
    return 0;
}
