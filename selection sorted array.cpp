#include<stdio.h>
int main()
{
	int a[100],n,i,j,mx,swap;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter %d numbers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		mx=i;
		for(j=i+1;j<n;j++)
		{
			if(a[mx]>a[j])
			mx=j;
		}
		if(mx !=i)
		{
			swap=a[i];
			a[i]=a[mx];
			a[mx]=swap;
		}
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
	
}
