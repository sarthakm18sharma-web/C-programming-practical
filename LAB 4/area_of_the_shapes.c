#include<stdio.h>
#include<conio.h>
int main(void)
{
    printf("press 1 for the area of the circle");
    printf("press 2 for the area of the rectangle");
    printf("press 3 for the area of the triangle");
    int ch;
    float r,L,B,h,b;
    printf("enter you choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:

            printf("enter the radius of the circle");
            scanf("%f",&r);
            printf("the area of the circle is: %.2f",3.14*r*r);
            break ;

        case 2:

            printf("enter the length of the rectangle");
            printf("enter the breadth of the rectangle");
            scanf("%f%f",&L,&B);
            printf("the area of the rectngle is: %.2f",L*B);
            break ;

        case 3:

            printf("enter the height of the triangle and\n");
            printf("enter the base of the triangle\n");
            scanf("%f%f",&h,&b);
            printf("the area of the triangle is: %.2f",h*b);
            break ;

        default :
            printf("invalid option:");
    }
}
