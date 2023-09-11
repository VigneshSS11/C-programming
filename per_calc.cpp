/*This C  program is written by Vignesh SS to find percentage of a student*/ 
#include<stdio.h>
int main()
{
	int P,C,M,B,E;
	float per;
	printf("Enter your physics marks:");
	scanf("%d/n",&P);
	printf("Enter your chemistry marks:");
	scanf("%d/n",&C);
	printf("Enter your maths marks:");
	scanf("%d/n",&M);
	printf("Enter your biology marks:");
	scanf("%d/n",&B);
	printf("Enter your english marks:");
	scanf("%d/n",&E);
	per=(P+C+M+B+E)/5;
	printf("Your percentage is %f",per);
	return 0;
}
