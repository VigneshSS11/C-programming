/*This program is written by Vignesh SS to check type of triangle based on side length*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of sides:");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c)
    printf("These sides corresponds to equilateral triangle");
    else if(a==b || a==c || b==c)
    printf("These sides corresponds to isoceles traingle");
    else
    printf("These sides corresponds to scalene triangle");
    return 0;    
    }