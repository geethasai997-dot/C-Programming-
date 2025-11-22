//to read and display name,rollno,dept
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10],rollno[10],dept[10];
	int sec;
	puts("enter your name");
	gets(name);
	puts("enter your rollno");
	gets(rollno);
	puts("enter your dept");
	gets(dept);
	printf("enter your section");
	scanf("%d",&sec);
	return 0;
}
