#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,b;
    printf("enter the 1st number ");
    scanf("%d",&a);
    printf("enter the 2nd number ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the 1sr number is now: %d\n",a);
    printf("the 2nd number is now: %d",b);
    getch();
    return 0;
}
