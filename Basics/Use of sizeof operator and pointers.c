#include<stdio.h>
int main()
{
	//initialization
	int a=10;
	long long b;
	char c;
	printf("%d\n",&a);//prints address of 10
	printf("%d\n",*&a);//prints 10
	printf("int occupies %d bytes\n",sizeof(a));
	printf("long long occupies %d bytes\n",sizeof(b));
	printf("char occupies %d bytes\n",sizeof(c));
	
}