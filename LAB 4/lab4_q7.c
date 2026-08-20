#include<stdio.h>
#include<conio.h>
int main(void)
{
    int unit;
    float bill;
    printf("enter the total unite that you have used: ");
    scanf("%d", &unit);

    switch (unit)
    {
        case 0 ... 100:
            printf("your bill amount is: 00.00");
            break;

        case 101 ... 200:
            bill = (unit-100)*1.5;
            printf("your bill amount is: %.2f", bill);
            break;

        case 201 ... 400:
            bill = (100)*1.5 + (unit-200)*2.5;
            printf("your bill amount is: %.2f", bill);
            break;

        default:
            if (unit > 400)
            {
                bill = (100)*1.5 + (200)*2.5 + (unit-400)*3.5;
                printf("your bill amount is: %.2f", bill);
            }
            break;
    }

    getch();
    return 0;
}
