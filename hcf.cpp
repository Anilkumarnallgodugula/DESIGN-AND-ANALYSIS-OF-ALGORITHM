#include<stdio.h>
int main()
{
	int a,b,i,hcf;
	printf("enter the integers");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a||i<=b;i++)
	{  
	if(a%i==0 && b%i==0)
	hcf=i;
    }
	printf("hcf of %d and %d=%d",a,b,hcf);
	return 0;
}
