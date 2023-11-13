//This C program is written by Vignesh SS to reverse the array elements
#include<stdio.h>
int main()
{
	int i,t,n;
	int a[n];
	printf("Enter the number of numbers for inpunt:");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		t=a[n-i];
		a[n-i]=a[i];
		a[i]=t;
	}
	
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	return 0;
}
	
	
	
