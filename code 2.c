//Program to check whether a given number is divisible by 7 or divisible by 3

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%3==0 ||num%7==0)
        printf("Number is divisible by 3 or 7");
    else
        printf("Number is not divisible by 3 or 7");
    getch();
}