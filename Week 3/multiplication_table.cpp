//This C program is written by Vignesh SS to print multiplication table of given number
#include<stdio.h>
int main()
{
	int i,N,pr;
	printf("Enter the number for which you need multiplication table:");
	scanf("%d",&N);
	printf("The multiplication table of %d is shown below\n",N);
	for(i=1;i<21;i++)
	{
		pr=N*i;
		printf("%d*%d=%d\n",N,i,pr);		
	}
	return 0;
}
