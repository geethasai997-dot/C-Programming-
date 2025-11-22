//linear search
#include<stdio.h>
int main()
{
	int a[10],n,i,count=0,key;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter an element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			count=1;
			break;
		}
	}
	if (count==0)
	printf("%d is not found\n",key);
	else
	printf("%d is found at %d index",key,i);
	return 0;
}
