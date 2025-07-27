#include<stdio.h>
void selectsort(int *arr,int size);
int main()
{
	int n,a[100];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectsort(a,n);
	printf("The sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void selectsort(int *arr,int size)
{
	int p,j,max,maxind,temp;
	for(p=0;p<size-1;p++)
	{
		max = arr[0];
		maxind = 0;
		for(j=0;j<size-p;j++)
		{
			if(arr[j]>max)
			{
				max = arr[j];
				maxind = j;
			}
		}
		temp = arr[maxind];
		arr[maxind] = arr[j-1];
		arr[j-1] = temp;
	}
}