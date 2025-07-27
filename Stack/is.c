#include<stdio.h>
void insertion_sort(int *arr,int m);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void insertion_sort(int *arr,int m)
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{
		for(j=i-1;j>0;j--)
		{
			temp=arr[i];
			if(arr[j]<temp)
			{
				arr[j+1]=temp;
				break;
			}
			else if(arr[j]>temp)
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				j--;	
			}
			else if(j == -1)
			{
				arr[0]=temp;
			}
		}
	}
}