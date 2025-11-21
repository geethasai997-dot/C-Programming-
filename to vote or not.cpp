#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
