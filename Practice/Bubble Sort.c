#include<stdio.h>
void bubblesort(int *arr,int size);
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("The sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void bubblesort(int *arr,int size)
{
	int p,j,temp,sc;
	sc = 0;
	for(p=1;p<=size;p++)
	{
		for(j=0;j<size-p;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				sc++;
			}
		}
	}
}