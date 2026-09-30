#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int j = 2; j <= n; j++)
    {
        int count = 0;
        for(int i = 1; i <= j; i++)
        {
            if(j % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("Prime number is :%d\n ", j);
        }
    }
    return 0;
}