//to print digit in words
#include<stdio.h>
int main()
{
	int d;
	printf("enter a single digit");
	scanf("%d",&d);
	if(d==0)
	{
	printf("zero\n");	
	}
	else if(d==1)
	{
		printf("one\n");
	}
	else if(d==2)
	{
		printf("two\n");
	}
	else if(d==3)
	{
		printf("three\n");
	}
	else if(d==4)
	{
		printf("four\n");
	}
	else if(d==5)
	{
		printf("five\n");
	}
	else if(d==6)
	{
		printf("six\n");
	}
	else
	{
		printf("invalid digit\n");
	}
	return 0;
}
