#include<stdio.h>
#include<conio.h>
int main(void)
{
    int y;
    printf("enter the year:");
    scanf("%d",&y);
    if (y%100==0){
        if (y%400==0)
        {
            printf("leap year");
        }
        else
        {
            printf("no a leap year");
        }
    }
    else if (y%4==0)
    {
        printf("leapp year");
    }
    else
    {
        printf("the year is not a leap year");
    }
    getch()
    return 0;
}
