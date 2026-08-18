#include<stdio.h>
#include<conio.h>
int main(void)
{
    printf("enter number form 1 to 7 to print the name of the day:N");
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("the day is monday");
            break ;
        case 2:
            printf("the day is tuesday");
            break ;
        case 3:
            printf("the day is wednesday");
            break ;
        case 4:
            printf("the day is thrusday");
            break ;
        case 5:
            printf("the day is friday");
            break ;
        case 6:
            printf("the day is saturday");
            break ;
        case 7:
            printf("the day is sunday");
            break ;
        default:
            printf("invalid option");
    }
}
