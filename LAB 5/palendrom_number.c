#include<stdio.h>
int main(void)
{
    int num, pal=0,tem;
    printf("Enter the give number:\n");
    scanf("%d",&num);
    tem=num;
    while (num!=0)
        {
            int a=num%10;
            pal=pal*10+a;
            num=num/10;
        }
    if (pal == tem)
        printf("palendrom number");
    else
        printf("Not a palendrom number");
    return 0;
}