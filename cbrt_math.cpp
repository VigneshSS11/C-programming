/*This program is written by Vignesh SS to calculate cube of number*/
#include<stdio.h>
#include<math.h>
int main()
{
	double C,c;
	printf("Enter a number:");
	scanf("%lf/n",&C);
	c=cbrt(C);
	printf("Cube root of %lf is %lf",C,c);
	return 0;
}
