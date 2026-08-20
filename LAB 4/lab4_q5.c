#include<stdio.h>
#include<conio.h>
int main(void)
{
    int calls;
    float bill;
    printf("enter the number of calls you have made: ");
    scanf("%d", &calls);

    switch (calls)
    {
        case 0 ... 100:
            printf("your bill amount is: 200.00");
            break;

        case 101 ... 150:
            bill = 200 + (calls-100)*0.60;
            printf("your bill amount is: %.2f", bill);
            break;

        case 151 ... 200:
            bill = 200 + (150-100)*0.60 + (calls-150)*0.50;
            printf("your bill amount is: %.2f", bill);
            break;

        default:
            if (calls > 200)
            {
                bill = 200 + (150-100)*0.60 + (200-150)*0.50 + (calls-200)*0.40;
                printf("your bill amount is: %.2f", bill);
            }
            break;
    }

    getch();
    return 0;
}
