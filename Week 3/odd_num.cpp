//This C program is written by Vignesh SS to print ODD numbers from 1 to N
#include<stdio.h>
int main()
{
	int i,N;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;++i)
	{
		if(i%2==1)
		printf("%d\n",i);        
    }
	return 0;
}
