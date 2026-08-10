#include<stdio.h>
#include<math.h>
int main(void)
{
    float w,x,y,z,c,a,b,d;
    printf("enter the 2 points x1 and y1 :");
    scanf("%f%f",&w,&x);
    printf("enter the 2 points x2 and y2 :");
    scanf("%f%f",&y,&z);
    a=(y-w);
    b=(z-x);
    d=sqrtf(a*a+b*b);
    printf("the distance between these two points is: %.2f",d);
    return 0;
}
