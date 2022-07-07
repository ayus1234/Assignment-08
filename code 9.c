//Program to find the nature of roots of a quadratic equation

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    int D;
    float x,y;
    printf("Enter the Coefficient of x^2, x and constant term\n");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
        printf("Both Roots are Imaginary");

    else if(D==0)
    {
        printf("Both Roots are Equal");
        x=-b/(2.0*a);
        printf("\nRoots are %f and %f",x,x);
    }
    else
    {
        printf("Both Roots are Real and Distinct");
        x=(-b+sqrt(D))/(2.0*a);
        y=(-b-sqrt(D))/(2.0*a);
        printf("\nRoots are %f and %f",x,y);
    }
    getch();
}