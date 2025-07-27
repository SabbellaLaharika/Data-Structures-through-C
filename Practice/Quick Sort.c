#include<stdio.h>
void quicksort(int *arr,int Low,int High);
void swap(int *arr,int m, int n);
int partition(int *arr,int Low,int High);
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void quicksort(int *arr,int Low,int High)
{
	int par;
	if(Low<High)
	{
		par = partition(arr,Low,High);
		quicksort(arr,Low,par-1);
		quicksort(arr,par+1,High);
	}
}
void swap(int *arr,int m, int n)
{
	int temp;
	temp = arr[m];
	arr[m] = arr[n];
	arr[n] = temp;
}
int partition(int *arr,int Low,int High)
{
	int p = High,i = Low,j = Low;
	while(i<p)
	{
		if (arr[i]<arr[p])
		{
			swap(arr,i,j);
			j++;
		}
		i++;
	}
	swap(arr,j,p);
	return j;
}