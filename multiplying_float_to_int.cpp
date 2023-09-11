/*This program is written by Vignesh SS to multiply two floating point numbers*/
#include<stdio.h>
int main()
{
	float a,b,c;
	int C;
	printf("Enter two floating point numbers to multiply:");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("The product of two numbers in floating point is %f\n",c);
	C=a*b;
	printf("The product of two numbers in integer type is %d",C);
	return 0;	
}
