//Program to find greater among three numbers. If two or three numbers are identical and greatest among all then print it only once

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    (num1>num2?(num1>num3?printf("%d is greater",num1):printf("%d is greater",num3)):(num2>num3?printf("%d is greater",num2):printf("%d is greater",num3)));
    getch();
}