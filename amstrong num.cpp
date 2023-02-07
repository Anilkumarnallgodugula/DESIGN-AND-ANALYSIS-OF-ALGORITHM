#include<stdio.h>
int main()
{
	int n,sum=0,rev,temp;
	printf("enter integer:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=n%10;
		sum=sum+rev*rev*rev;
		n=n/10;
	}
	if(sum==n)
	{
		printf("it is amstrong");
	}
	else
	{
		printf("it is not amstrong");
	}
}
