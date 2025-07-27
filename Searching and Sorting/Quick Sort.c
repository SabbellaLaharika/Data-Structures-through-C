#include<stdio.h>
void quicksort(int *arr,int L,int H);
void swap(int *arr,int m,int n);
int partition(int *arr,int L,int H);
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void quicksort(int *arr,int L,int H)
{
	int par;
	if(L<H)
	{
		par = partition(arr,L,H);
		quicksort(arr,L,par-1);
		quicksort(arr,par+1,H); // partition is nothing but mid
	}
}
void swap(int *arr,int m,int n)
{
	int temp;
	temp = arr[m];
	arr[m] = arr[n];
	arr[n] = temp;
}
int partition(int *arr,int L,int H)
{
	int p = H;
	/*   p = H;
	i = L;
	j = L; */
	int i = L,j = L;
	while(i<p)
	{
		if(arr[i] < arr[p])
		{
			swap(arr,i,j);
			j++;
		}
		i++;
	}
	swap(arr,j,p);
	return j;
}