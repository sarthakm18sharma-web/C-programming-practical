//reverse of a number
#include<stdio.h>
int main(void)
{
    int num, rev=0;
    printf("Enter the give number:\n");
    scanf("%d",&num);
    while (num!=0)
        {
            int a=num%10;
            rev=rev*10+a;
            num=num/10;
        }
    printf("Reverse of the number is:\n");
    printf("%d",rev);
    return 0;
}
