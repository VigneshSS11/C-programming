/*This program is written by Vignesh SS to find the greatest of three numbers*/
#include <stdio.h>
int main()
{
    int v,i,g;
    printf("Enter three numbers:");
    scanf("%d %d %d",&v,&i,&g);
    if(v>i && v>g)
    printf("%d is greatest",v);
    else if(i>g&& i>v)
    printf("%d is greatest",i);
    else
    printf("%d is greatest",g);
    return 0;
}
