#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,b;
    printf("checking if any one number is the multiple of other\n");
    scanf("%d%d",&a,&b);
    if (a%b==0){
        printf("1st number is the multiple of the other");
    }
    else if (b%a==0){
            printf("2nd is the multiple of other");
    }
    else{
        printf("both are not the multiple of each other");
    }
    getch();
    return 0;
}
