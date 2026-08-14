#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d;
    float r1,r2;
    printf("finding the roots of a quarditiv equation\n");
    printf("enter the coefficirnt of x^2 , x and the constant respectively:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0){
        printf("the quarditic equation has 2 distinct roots\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("these roots are: %.2f,%.2f",r1,r2);
    }
    else if (d==0){
        printf("the quarditic has 2 equal roots\n1");
        r1=r2=-b/(2.0*a);
        printf("these roots are: %.2f",r1);

    }
    else {printf("the roots are imaginary");}
    getch();
    return 0;

}
