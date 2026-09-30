#include<stdio.h>
int main(void)
{
    int n,count=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            if (n%i==0)
                {
                    count++;
                }
        }
    if (count==2)
        {
            printf(" prime number");
        }
    else 
        {
            printf("not a prime number");
        }
}
