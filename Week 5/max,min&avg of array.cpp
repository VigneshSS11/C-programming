//This C program is written by Vignesh SS to find the minimum,maximum and average in an unsorted arrray of integers
#include<stdio.h>
int main()
{
	int i,max,min,n;
	float avg,sum;
	int a[n];
	printf("Enter the number of numbers for inpunt:");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//finding maximum of entered numbers
	for(i=1;i<n;i++)
	{
		max=a[0];
		if(a[i]>max)
		max=a[i];
		else
		max=a[0];
	}
	printf("Maximum value is %d\n",max);
	
	//finding minimum of numbers
	for(i=1;i<n;i++)
	{
		min=a[0];
		if(a[i]<min)
		min=a[i];
		else
		min=a[0];
	}
	printf("Minimum value is %d\n",min);
	
	//finding average of numbers
	sum=a[0];
	for(i=1;i<n;i++)
	{
	    
		sum=sum+a[i];     
	}
	avg=sum/n;
	printf("Average of all numbers is %f\n",avg);
	return 0;
}
