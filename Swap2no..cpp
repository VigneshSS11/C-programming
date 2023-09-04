/*This program is written by Vignesh SS to swap two numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	c=a;
	a=b;
	printf("The value of a: %d\n",a);
	printf("The value of b:%d\n",c);
}
