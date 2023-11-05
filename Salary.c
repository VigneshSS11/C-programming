/*This C program is written by Vignesh SS to find salary*/
#include<stdio.h>
int main()
{
    int B,H,D,S;
    printf("Enter the Basic salary:");
    scanf("%d", &B);
    H=0.35*B;
    D=.45*B;
    S=1.8*B;
    printf("Housing allowance is %d\n",H);
    printf("Dearness allowance is %d\n",D);
    printf("The Gross salary is %d",S);
    return 0;
}
