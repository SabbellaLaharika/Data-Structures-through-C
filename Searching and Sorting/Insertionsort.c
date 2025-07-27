#include<stdio.h>
void insertionsort(int *arr,int m);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("Sorted Array is  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}  
}
void insertionsort(int *arr,int m)
{
	int p,j,temp;
	for(p=0;p<m;p++)
	{
		temp=arr[p];
		for(j=p-1;j>=0;j--)
		{
			if(arr[j]<temp)
			{
				arr[j+1] = temp;
				break;
			}
			else
			{
				arr[j+1] = arr[j];
			}
		}
		if(j == -1)
		{
			arr[0] = temp;
		}
	}
}