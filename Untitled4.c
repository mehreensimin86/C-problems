//C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:\n");
    scanf("%d",&x);
    if ((x%5==0)&&(x%11==0))
    {
        printf("number is divisible by 5 and 11");
    }
    else { printf("number is not divisible by 5 and 11 "); }
    return 0;
}
