#include<stdio.h>
int main(void)
{
    int num, sum=0;
    printf("Enter the give number:\n");
    scanf("%d",&num);
    while (num!=0)
        {
            int a=num%10;
            sum=sum+a;
            num=num/10;
        }
    printf("sum of the number is:\n");
    printf("%d",sum);
    return 0;
}