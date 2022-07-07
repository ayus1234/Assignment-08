//Program to check whether a given number is positive, negative or zero

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num>0)
        printf("Number is Positive");
    else if(num<0)
        printf("Number is Negative");
    else
        printf("Number is Zero");
    getch();
}