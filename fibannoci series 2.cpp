#include<stdio.h>
int main()
{
  int i,n,k=0;
  int t1=0,t2=1;
  int a=t1+t2;
  printf("enter the number of terms:");
  scanf("%d",&n);
  printf("fibannoci series: %d,%d",t1,t2);
  for(i=3; i<n; ++i)
  {
  	printf("%d\n",a);
  	t1=t2;
  	t2=a;
  	a=t1+t2;
  }
  if(i/2==0)
  {
  	k=k+a;
  	printf("%d",k);
  }
  return 0;
} 
