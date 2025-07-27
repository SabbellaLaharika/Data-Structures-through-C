
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	//reading
	for(i=0;i<5;i++)
	{
		scanf("%d ",a+i);
	}
	//printing
	for(i=0;i<5;i++)
	{
		printf("%d ",*(a+i));
	}
} 
/*
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	//reading
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	//printing
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
*/