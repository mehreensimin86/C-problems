//C program to check whether a character is Uppercase or Lowercase
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("is a lowercase alphabet");

    }
    else if(ch>='A'&&ch<='Z')
    {
        printf(" is a uppercase alphabet");
    }
    return 0;
}
