#include<stdio.h>
int sumn(int x);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	printf("%d",sumn(n));
	return 0;
}
int sumn(int x)
{
	if(x==1)
	return 1;
	else
	return x+sumn(x-1);
}

