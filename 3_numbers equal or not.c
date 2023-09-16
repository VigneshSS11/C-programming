/*This program is written by Vignesh SS to check three numbers equal or not*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    printf("All are equal");
    else
    printf("These are not equal");
    return 0;
}