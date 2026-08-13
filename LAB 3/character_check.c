#include<stdio.h>
#include<conio.h>
int main(void)
{
    char a;
    printf("enter the character");
    scanf("%c",&a);
    if ((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
    {
        printf("the character is a vowel");
    }
    else if ((a>='0')&&(a<='9'))
        {
            printf("the character is a number");
        }
    else
        {
            printf("the character is a consonant");
        }
    getch();
    return 0;
}
