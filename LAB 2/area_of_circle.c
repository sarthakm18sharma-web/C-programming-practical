#include<stdio.h>
#include<conio.h>
int main(void)
{
    int r;
    float area,pi=3.14;
    printf("enter the redius of circle:");
    scanf("%d",&r);
    area=pi*r*r;
    printf("the area of the circle: %.2f",area);
    getch();
    return 0;
}
