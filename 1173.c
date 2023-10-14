#include <stdio.h>
int main()
{
    int N[10], a, V;
    scanf("%d", &V);
    for(a=0; a<=9; a++)
    {
        N[a]=V;
        printf("N[%d] = %d\n",a,V);
        V*=2;
    }
    return 0;
}
