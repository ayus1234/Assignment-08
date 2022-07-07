//Program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Alphabet is in UPPERCASE");
    else if(ch>='a' && ch<='z')
        printf("Alphabet is in lowercase");
    else
        printf("Special Character");
    getch();
}