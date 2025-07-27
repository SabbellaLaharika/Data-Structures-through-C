#include<stdio.h>
int fun();
int main()
{
	int s;
	s=fun();
	printf("%d",s);
}
int fun()
{
	return 10,20,30,40;
}