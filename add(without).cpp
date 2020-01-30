#include<stdio.h>
void add(int x,int y);
int main()
{
	int a=10,b=20;
add(a,b);
return 0;
}
void add(int x,int y)
{
	printf("%d",x+y);
}
