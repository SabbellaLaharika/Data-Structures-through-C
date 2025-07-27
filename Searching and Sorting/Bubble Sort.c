#include<stdio.h>
void bubblesort(int *arr,int m);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("Sorted Array is  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void bubblesort(int *arr,int m)
{
	int p,j,temp,sc=0;
	for(p=1;p<=m;p++)
	{
		sc=0;
		for(j=0;j<m-p;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
			    arr[j] = arr[j+1];
			    arr[j+1] = temp;
			    sc++;
			} 	
		}
		if(sc==0)
		{
			break;
		}
		for(j=0;j<m;j++)
	    {
		    printf("%d\t",arr[j]);
	    }
	    printf("\n"); 
	}
}