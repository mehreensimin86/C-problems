//Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:");
    scanf("%d",&x);
    if (x>0)
    {
        printf("the number is positive");
    }
    else if (x<0)
    {
        printf("the number is negative");
    }
    else if (x==0)
    {
        printf("The number is zero");
    }
    return 0;
}
