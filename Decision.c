#include<stdio.h>
void main()

{
	int x;
	printf("Enter student marks");
	scanf("%d",&x);
	if (x<=100 && x>=85)
	{
		printf("Grade A");
	}
	else if (x<=84 && x>=70)
	{
		printf("Grade B");
	}
	else if (x<=69 && x>=55)
	{
		printf("Grade C");
	}
	else if (x<=54 && x>=40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");		
	}
}
