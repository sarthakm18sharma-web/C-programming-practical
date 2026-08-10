#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,sum=0;
    printf("enter the number of 4 digit for the sum of it:");
    scanf("%d",&a);
    sum=sum+a%10;
    sum=sum+(a/1000)%10;
    sum=sum+(a/100)%10;
    sum=sum+(a/10)%10;
    printf("%d",sum);
}
