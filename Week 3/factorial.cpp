//This C program is written by Vignesh SS to find factorial of a number
#include<stdio.h>
int main()
{
	int i,N,fact=1; ;
	printf("Enter the number for which you want to find factorial:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	fact=fact*i;
	printf("The factorial of %d is %d",N,fact);
	return 0;
}
