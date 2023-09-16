/*This program is written by Vignesh SS to find grade of student based on percentage*/
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
	if(per>=90)
	printf("Your grade is A");
	else if(per>=80)
	printf("your grade is B");
	else if(per>=70)
	printf("Your grade is C");
	else if(per>=60)
	printf("Your grade is D");
	else if(per>=40)
	printf("Your grade is E");
	else(per<40)
    printf("Your grade is F");
    return 0;    	
}
