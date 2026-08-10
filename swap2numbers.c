#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,b,c;
    printf("enter the 1st number ");
    scanf("%d",&a);
    printf("enter the 2nd number ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the 1sr number is now: %d\n",a);
    printf("the 2nd number is now: %d",b);
    getch();
    return 0;
}
