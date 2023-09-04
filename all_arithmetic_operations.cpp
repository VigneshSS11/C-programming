/*This program is written by Vignesh to perform all arithmatic operations*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter two integers to perform all arithmetic operations");
	scanf("%d %d" ,&a ,&b);
	c=a+b;
	printf("The sum of numbers is %d \n",c);
	d=a-b;
	printf("The difference of two numbers is %d\n",d);
	e=a*b;
	printf("The product of two numbers is %d\n",e);
	f=a/b;
	printf("The division of two numbers is %d\n",f);
	return 0;
}

