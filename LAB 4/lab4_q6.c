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
        case 0 ... 150:
            printf("your bill amount is: 00.00");
            break;

        case 151 ... 250:
            bill = (calls-150)*0.9;
            printf("your bill amount is: %.2f", bill);
            break;

        case 251 ... 400:
            bill = (100)*0.9 + (calls-250)*1.2;
            printf("your bill amount is: %.2f", bill);
            break;

        default:
            if (calls > 400)
            {
                bill = (100)*0.9 + (100)*1.20 + (calls-400)*1.5;
                printf("your bill amount is: %.2f", bill);
            }
            break;
    }


    return 0;
}
