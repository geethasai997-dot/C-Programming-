//to find minimum and maximum
#include<stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("min=%d\n",min);
	printf("max=%d\n",max);
	return 0;
}
