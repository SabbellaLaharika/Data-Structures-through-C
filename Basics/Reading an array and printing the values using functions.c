#include<stdio.h>
void printarray(int *arr, int n)
{ 
    int i,a[n];
	for(i=0;i<n;i++)	
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int m;
	scanf("%d",&m);
	int arr[m],i;
	for(i=0;i<m;i++)
	{
		scanf("%d ",arr + 1);
	}
	printarray(*arr,m);
	printf("\n");
}