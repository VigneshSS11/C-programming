//This C program is written by Vignesh SS to find sum of first N natural number.
#include<stdio.h>
int main()
{
	int i,N,sum=0;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	sum=sum+i;
	printf("The sum of first %d natural numbers is %d",N,sum);
	return 0;
}
