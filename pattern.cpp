#include<stdio.h>
int fact(int x);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("%d",fact(i)/(fact(i-j)*fact(j)));
		printf("\n");
	}
	return 0;
}
int fact(int x)
{
		int f=1,i;
	for(i=1;i<=x;i++)
	f=f*i;
	return f;
}

