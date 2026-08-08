#include<stdio.h>
#include<conio.h>

int main(void)
{
  int a, b, c;
  printf("enter the total time in seconds: ");
  scanf("%d", &a);

  c = a / 3600;           // hours
  b = (a % 3600) / 60;    // minutes
  a = a % 60;             // remaining seconds

  printf("time in hours, minutes and seconds is: %d:%d:%d\n", c, b, a);

  return 0;
}
