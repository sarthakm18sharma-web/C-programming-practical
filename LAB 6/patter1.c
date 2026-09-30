#include<stdio.h>
int main(void)
{
    int i,j;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Pattern 1 \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
