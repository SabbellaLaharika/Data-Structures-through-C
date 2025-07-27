#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",__builtin_clz(n)); //clz stands for count of leading zeroes i.e; the in binary before one upto 4bytes
	printf("%d\n",31-__builtin_clz(n));
}