/*This program is written by Vignesh SS to convert days into years*/
#include<stdio.h>
int main()
{
	float D,Yrs;
	printf("Enter the number of days:");
	scanf("%f/n",&D);
	Yrs=D/365.0;
	printf("The number of years for %f days is %f",D,Yrs);
	return 0;
}
