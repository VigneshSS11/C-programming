/*This C program is written by Vignesh SS to sort the elements of an array of integers
in ascending order*/
#include<stdio.h>
int main()
{
	int i,j,n;
	int a[n];
	printf("Enter the number of numbers for inpunt:");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//sorting the elements
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j+1]=a[j]+a[j+1];
				a[j]=a[j+1]-a[j];
				a[j+1]=a[j+1]-a[j];
			}
			
		}
	}
	
	//printing the values
	for(i=0;i<n;i++)
	printf("%2d",a[i]);
	return 0;
}
