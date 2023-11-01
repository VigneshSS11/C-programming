//This C program is written by Vignesh SS to print EVEN numbers from 1 to N
#include<stdio.h>
int main()
{
	int i,N;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;++i)
	{
		if(i%2==0)
		printf("%d\n",i);        
    }
	return 0;
}
