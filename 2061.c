#include <stdio.h>
#include <string.h>
int main()
{
    int x,y;
    char t[10];
    scanf("%d%d",&x,&y);
    int c=x;
    while(y--)
    {
        scanf("%s",t);
        if(t[0] == 'f')
            c++;
        else
         c--;
    }
        printf("%d\n",c);

return 0;
}
