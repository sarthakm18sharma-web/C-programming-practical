#include<stdio.h>
int main(void)
{
    int array[5];
    printf("Enter numbers in array (valus are 5):\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d ",&array[i]);
    }
    printf("printing the array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}