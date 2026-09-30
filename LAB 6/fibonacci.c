#include<stdio.h>
int main(void)
{
    int a=0, b=1, c,n;
    printf("Enter the number of terms you need: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
}