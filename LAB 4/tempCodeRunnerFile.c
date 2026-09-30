#include<stdio.h>
#include<conio.h>
int main(void)
{
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    int ch;
    float num1,num2,result;
    printf("enter you choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            {
            printf("enter the first number\n");
            scanf("%f",&num1);
            printf("enter the second number\n");
            scanf("%f",&num2);
            result=num1+num2;
            printf("the sum is: %.2f",result);
            break ;
            }
        case 2:
            {
            printf("enter the first number\n");
            scanf("%f",&num1);
            printf("enter the second number\n");
            scanf("%f",&num2);
            result=num1-num2;
            printf("the difference is: %.2f",result);
            break ;
            }
        case 3:
            {
            printf("enter the first number\n");
            scanf("%f",&num1);
            printf("enter the second number\n");
            scanf("%f",&num2);
            result=num1*num2;
            printf("the product is: %.2f",result);
            break ;
            }
        case 4:
            {
            printf("enter the first number\n");
            scanf("%f",&num1);
            printf("enter the second number\n");
            scanf("%f",&num2);
            if(num2!=0)
            {
                result=num1/num2;
                printf("the quotient is: %.2f",result);
            }
            else
            {
                printf("division by zero is not possible");
            }
            break ;
            }
        default:
            {
            printf("invalid choice\n");
            break ;
            }
    }
}
