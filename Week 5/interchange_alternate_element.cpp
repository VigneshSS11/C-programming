//This program is written by Vignesh SS to interchange alternate elements in an even sized array
#include<stdio.h>
int main()
{
	int i,j,n,t;
	int a[n];
	printf("Enter the number of numbers for input(number should be even):");
	scanf("%d",&n);
	
	if(n%2==1)
	{
		printf("The number given is odd \n So,program cannot be executed");
	}
	
	printf("Enter the numbers\n");
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	
	return 0;
}
	
	
