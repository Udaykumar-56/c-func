#include<stdio.h>
int fact(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	f=f*i;
	return f;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}

