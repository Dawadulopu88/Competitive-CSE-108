#include <stdio.h>

int main()
{
    int x;
    int factorial = 1;

    scanf("%d", &x);

    if (x < 0 || x >= 13)
    {
        printf("Invalid input. N should be between 0 and 12.\n");
        return 1;
    }
    int i;
    for (i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    printf("%d\n", factorial);

    return 0;
}
