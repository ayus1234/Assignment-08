//Program to check whether a given year is a leap year or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter any Year\n");
    scanf("%d",&year);
    if(year%4)
        printf("Not a Leap Year");
    else if(year%100)
        printf("Leap Year");
    else if(year%400)
        printf("Not a Leap Year");
    else
        printf("Leap Year");
    getch();
}