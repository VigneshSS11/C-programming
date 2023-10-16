//This program is written by Vignesh SS to print lower right triangle pattern for given number of lines(n)
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(s=0;s<n-i-1;s++)
	    { 
	    printf(" ");
		}
    for(j=0;j<i+1;j++)
        {
    	printf("*");
	    }
		printf("\n");
	}
	return 0;
}
