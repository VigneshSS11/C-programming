//This program is written by VIGNESH SS to write days for day numbers
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the day number:");
	scanf("%d",&a);
	if(a%7==1)
	printf("Monday");
	else if(a%7==2)
	printf("Tuesday");
	else if(a%7==3)
	printf("Wednesday");
	else if(a%7==4)
	printf("Thursday");
	else if(a%7==5)
	printf("Friday");
	else if(a%7==6)
	printf("Saturday");
	else
	printf("Sunday");
	return 0;
	
}
