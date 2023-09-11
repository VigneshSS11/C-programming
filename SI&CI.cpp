/*This program is written by Vignesh SS to find simple interest and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	int P,t;
	float r,SI,CI;
	printf("Enter the principal amount:");
	scanf("%d",&P);
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	printf("Enter the number of years:");
	scanf("%d",&t);
	SI=(P*r*t)/100;
	printf("The simple interest is %f\n",SI);
	CI=P*pow(1+r/100,t);
	printf("The compound interest is %f\n",CI);
	printf("Note:Here compound interest is calculated annually");
	return 0;
}

