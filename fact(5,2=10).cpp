#include<stdio.h>
int fact(int x);
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	printf("%d",fact(n)/(fact(n-r)*fact(r)));
	return 0;
}
int fact(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	f=f*i;
	return f;
}
