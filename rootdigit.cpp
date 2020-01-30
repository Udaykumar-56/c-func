#include<stdio.h>
int rootDigit(int x);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",rootDigit(n));
	return 0;
}
int rootDigit(int x)
{
	int r,sum=0;
	while(x!=0)
	{
		r=x%10;
		sum=sum+r;
		x=x/10;
	}
	if(sum>9)
	return rootDigit(sum);
	else
	return sum;
}
