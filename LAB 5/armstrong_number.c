#include<stdio.h>

int main(void)
{
    int a, sum = 0, c, t;

    printf("Enter a number: ");
    scanf("%d", &a);

    t = a;

    while (a > 0)
    {
        c = a % 10;
        sum = sum + c*c*c;
        a = a / 10;
    }

    if (t == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }

    return 0;
}
