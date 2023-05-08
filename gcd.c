#include<stdio.h>
int gcd(int a,int b)
{
	if(a==b)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(a-b,b);
	}
	else
	{
		return gcd(a,a-b);
	}
}
int main()
{
	int a,b,c;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	if(c==1)
	{
		printf("no gcd");
	}
	else
	{
		printf("gcd is %d",c);
	}
}
