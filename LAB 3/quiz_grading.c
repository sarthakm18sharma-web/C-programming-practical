//Write a program that returns a letter grade based on a quiz score.
//The input will be the integer score from a ten-point quiz.
//a.	The letter grades are assigned by:
//b. 9-10“A”7-8“B”5-6“C”3-4“D”<3“F”
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int N;
    printf("enter the marks in the quiz from 0 to 10:");
    scanf("%d",&N);
    if (N>=9&&N<=10){
        printf("A grade");
    }
    else if (N>=7&&N<=8){
        printf("B grade");
    }
    else if (N>=5&&N<=6){
        printf("C grade");
    }
    else if (N>=3&&N<=4){
        printf("D grade");
    }
    else if (N>=0&&N<=2){
        printf("F grade");
    }
    else {
        printf("INVALID INPUT");
    }
}
