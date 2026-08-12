#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a;
    printf("enter the number of months:");
    scanf("%d",&a);
    switch (a){
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("59 days");
            break;
        case 3:
            printf("90 days");
            break;
        case 4:
            printf("120 days");
            break;
        case 5:
            printf("151 days");
            break;
        case 6:
            printf("181 days");
            break;
        case 7:
            printf("212days");
            break;
        case 8:
            printf("243 days");
            break;
        case 9:
            printf("273 days");
            break;
        case 10:
            printf("304 days");
            break;
        case 11:
            printf("334 days");
            break;
        case 12:
            printf("365 days");
            break;
    }
}
