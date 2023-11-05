//This C program is written by Vignesh SS to print left Parallelogram pattern for given number of lines(n)
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
		for(j=0;j<n;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}

