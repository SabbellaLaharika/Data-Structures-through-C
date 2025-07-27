#include<stdio.h>
void insertsort(int *arr,int size);
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertsort(a,n);
	printf("The sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void insertsort(int *arr,int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		j = i - 1;
		while(j >= 0 && arr[j]>arr[j+1])
		{
			temp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = temp;
			j = j-1;
		}
	}
}