//This C program is written by Vignesh SS to check for anagram of original string by noting first character after doing each rotations
#include<stdio.h>
int main()
{
	char vig[30],raj[30];
	int q,i;
	char d[30];
	int r[i];
	printf("Enter the original string:");
	scanf("%s",&vig);
	printf("Enter the number of times you need to rotate the string:");
	scanf("%d",&q);
	
	printf("Enter the rotations needed:");
	
	for(i=0;i<q;i++)
	{
		scanf("%c",&d[i]);
		
		if(d[i]=='L')		
		{
		raj[i]=vig[r[i]];
	    }
		else 
		{
		raj[i]=vig[0];
		}
		
		scanf("%d",&r[i]);
	
	}
	
	printf("%s",raj);
	
	int org[256]={0};
	int ana[256]={0};
	
	for(i=0;vig[i]!='\0';i++)
	org[vig[i]]++;
	for(i=0;raj[i]!='\0';i++)
	ana[raj[i]]++;
	
	if(org[256]==ana[256])
	printf("Yes");
	else
	printf("No");
	
	return 0;
	
	
	
	
	
	
}
