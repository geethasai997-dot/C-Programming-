//to grade student based on percentage
#include<stdio.h>
int main()
{
	int per;
	printf("enter student percentage");
	scanf("%d",&per);
	if(per>=90)
	{
		printf("grade O\n");
	}
	else if(per<90&&per>=80)
	{
		printf("grade S\n");
	}
		else if(per<80&&per>=70)
	{
		printf("grade A\n");
	}
		else if(per<70&&per>=60)
	{
		printf("grade B\n");
	}
		else if(per<60&&per>=50)
	{
		printf("grade C\n");
	}
		else if(per<50&&per>=40)
	{
		printf("grade D\n");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
