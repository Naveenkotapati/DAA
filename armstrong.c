#include<stdio.h>
int main()
{
	int n,r,t;
	int sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==t)
	{
		printf("Armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
