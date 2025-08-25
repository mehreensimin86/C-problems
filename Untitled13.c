//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if ((s1==s2) &&(s2==s3) )
        {
            printf("Triangle is equilateral");
        }
        else if ((s1==s2)||(s2==s3))
            {
                printf("triangle is isoscalene");
            }
            else {printf("triangle is scalene");}
            return 0;
}
