//This C program is written by Vignesh SS to find the Nth fibonacci number
#include<stdio.h>
int main()
{
	int i,ni,n1=0,n2=1,N;
	printf("Give the value of N to get the that fibonacci number:");
	scanf("%d",&N);
	if(N==1)
	printf("0 is the first fibonacci value");
	else if(N==2)
	printf("1 is the second fibonacci value");
	else
	{
	for(i=3;i<=N;i++)
	{
		ni=n1+n2;
		n1=n2;
		n2=ni;
	}
    printf("The value of %dth fibonacci number is %d",N,ni);
    }
	return 0;
}
