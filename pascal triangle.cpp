#include<stdio.h>
int main()
{
	int i,j,n,k,c;
	printf("number of rows:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			c=1;
			else
			c=c*(i-j+1)/j;
			printf("%4d",c);
		}
		printf("\n");
	}
	return 0;
}
