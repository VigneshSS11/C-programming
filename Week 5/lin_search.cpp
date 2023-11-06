//This C program is written by Vignesh SS to to search an element in a given unsorted array of elements using Linear search technique
#include<stdio.h>
int main()
{
	int n,c,key;
	int i;
	int a[n];
	printf("Enter the number of numbers you need in array:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("Enter the value of number which you are searching:\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("The number you were searching is in %dth position",(i+1));
			c=1;
			break;
		}
		else
		c=0;
	}
	
	if(c==0)
	printf("Number you were searching is not found");
	return 0;
}
