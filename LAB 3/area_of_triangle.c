#include<stdio.h>
#include<conio.h>
int main(void)
//Write a program that takes three sides of a triangle input and calculates
//its area, if these conditions are satisfied a+b>c, b+c>a, a+c>b,
//calculate area=(a+b+c)/2

{
    float a,b,c,area;
    printf("enter the 1st side length of the triangle");
    scanf("%f",&a);
    printf("enter the 2nd side length of the triangle");
    scanf("%f",&b);
    printf("enter the 3rd side length of the triangle");
    scanf("%f",&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
        {
        area=(a+b+c)/2;
        printf("the area of triangle is: %.2f",area);
    }
    else
        {
            printf("condition do not match");
    }


}
