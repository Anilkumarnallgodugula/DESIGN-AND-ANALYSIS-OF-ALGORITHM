#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},min,max,i;
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("the value of minimum:%d",min);
	printf("the value of maximum:%d",max);
	return 0;
}
