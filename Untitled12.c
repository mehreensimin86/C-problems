//C program to check whether triangle is valid or not if sides are given
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides value:\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if ((s1+s2)>s3)
    {
        if ((s2+s3)>s1)
        {
            if ((s3+s1)>s2)
            {
                printf("The triangle is valid");
            }
            else {printf("The triganle is not valid");}
        }
         else {printf("The triangle is not valid"); }
    }else {printf("the triangle is not valid");}
    return 0;
}
