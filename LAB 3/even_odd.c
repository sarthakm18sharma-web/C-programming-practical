#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a;
    //even or odd ka code he sale
    printf("enter a number:");
    scanf("%d",&a);
    if (a%2==0){
        printf("even number");
    }
    else
        {
            printf("odd number");
    }
    getch();
    return 0;
}
