#include<stdio.h>
#include<conio.h>
int main(void)
{
    int price;
    float discount;
    printf("enter the total price of your purchase:");
    scanf("%d",&price);
    switch (price)
    {
    case 0 ... 500:
        printf("sorry you discount is zero");
        break;
    case 501 ... 800:
        discount = price*0.20;
        printf("you discount id: %.2f",discount);
        break;
    default:
        if (price>=801)
            {
                discount = price*0.25;
                printf("your discount is: %.2f",discount);
                break;
            }
    }

    getch();
    return 0;
}
