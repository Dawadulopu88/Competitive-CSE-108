#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double avg=((a*2+b*3+c*4+d*1)/(2+3+4+1));
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        if(((e+avg)/2.0 )> 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", (e + avg ) / 2.0);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}

