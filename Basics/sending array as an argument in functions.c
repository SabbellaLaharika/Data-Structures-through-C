//sending an array as an argument to function
//call by ref
//sending an array to function is known as call by ref
#include<stdio.h>
void modify(int *a) // integer pointer a[]
{
	a[0]=a[0]+1;
}
int main()
{
	int a = { 10, 20, 30, 40, 50};
	modify(a);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}