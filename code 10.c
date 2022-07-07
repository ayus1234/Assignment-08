//Program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade

#include<stdio.h>
#include<conio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    int total;
    float percent;
    printf("Enter the marks of Five Subjects\n");
    printf("Physics : ");
    scanf("%d",&mark1);
    printf("Chemistry : ");
    scanf("%d",&mark2);
    printf("Biology : ");
    scanf("%d",&mark3);
    printf("Maths : ");
    scanf("%d",&mark4);
    printf("Computer : ");
    scanf("%d",&mark5);
    total=mark1+mark2+mark3+mark4+mark5;
    percent=total/5.0;
    printf("\nTotal Marks Obtained : %d",total);

    if(percent>=90)
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : A");
        printf("\nResult : PASS");
    }
    else if(percent>=80)
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : B");
        printf("\nResult : PASS");
    }
    else if(percent>=70)
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : C");
        printf("\nResult : PASS");
    }
    else if(percent>=60)
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : D");
        printf("\nResult : PASS");
    }
    else if(percent>=40)
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : E");
        printf("\nResult : PASS");
    }
    else
    {
        printf("\nPercentage : %f",percent);
        printf("\nGrade : F");
        printf("\nResult : FAIL");
    }
    getch();
}