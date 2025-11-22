//to find length of the string
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10];
	int len=0,i;
	puts("enter your name");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	len++;
	printf("length of your name is%d\n",len);
	return 0;
}
