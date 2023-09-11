/* This C program is written by Vignesh SS to convert Kilometer to m,cm and mm*/
#include<stdio.h>
int main()
{
	float km,m;
	int cm,mm;
	printf("Enter the number of kilometers:");
	scanf("%f",&km);
	m=1000*km;
	printf("%f kilometers is %f meters\n",km,m);
	cm=100*m;
	printf("%f kilometers is %d centimeters\n",km,cm);
	mm=10*cm;
	printf("%f kilometers is %d millimeters",km,mm);
	return 0;		
}
