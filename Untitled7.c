//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if ((ch>=97&& ch<=122)|| (ch>=65&&ch<=90))
    {
        printf("%c is an alphabets",ch);
    }
    else {printf("%c is not an alphabets");}
    return 0;
}
