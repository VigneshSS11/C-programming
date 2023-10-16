//This program is written by Vignesh SS to print left lower triangular pattern for given number of lines(n)
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
