#include<stdio.h>
int main()
{
	int a[5] = { 10 ,20 ,30 ,40 ,50};
	//          100 104 108  112 116
	// a+4 = 116;
	// 100 104 108 112 116
	//int i;
	int *ptr = a;
	
	for(;ptr<=a+4;ptr++)
	{
		printf("%d ",ptr);
	}
}