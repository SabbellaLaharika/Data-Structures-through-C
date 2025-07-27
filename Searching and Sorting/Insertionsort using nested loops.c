#include<stdio.h>
void insertionsort(int *arr,int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		j=i - 1;
		while(j>=0&&arr[j]>arr[j+1])
		{
			temp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = temp;
			j=j-1;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	char a[20];
	for(i=0;i<n;i++)
	{
		//printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("Sorted array is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}