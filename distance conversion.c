#include<stdio.h>
#include<conio.h>
int main(void)
{
 float mm,cm,inche,feet;
 printf("enter the length in mm to print it in cm , inche and feet ");
 scanf("%f",&mm);
 cm=mm/10;
 inche=mm/25;
 feet=mm/300;
 printf("length in cm is: %f",cm);
 printf("length in inche is: %f",inche);
 printf("length in feet is: %f",feet);
 getch();
 return 0;

}
