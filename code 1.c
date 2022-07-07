//Program to check whether a given number is divisible by 3 and divisible by 2

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
        printf("Number is divisible by both 2 and 3");
    else
        printf("Number is not divisible by both 2 and 3");
    getch();
}