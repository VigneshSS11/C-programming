//This C program is written by Vignesh SS to swap two variables without using third variable
#include<stdio.h>
int main()
{
	int v,i;
	printf("Enter the value of v:\n");
	scanf("%d",&v);
	printf("Enter the value of i:\n");
	scanf("%d",&i);
	v=v+i;
	i=v-i;
	v=v-i;
	printf("The value of v:%d\n",v);
	printf("The value of i:%d\n",i);
	return 0;
}
	

