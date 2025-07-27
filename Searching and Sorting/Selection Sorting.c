#include<stdio.h>
void selectsort(int *arr,int m);
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		//printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	selectsort(a,n);
	printf("Sorted array is ");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\t ",i,a[i]);
		
	}
}
void selectsort(int *arr,int m)
{
	int p,j,max,maxind,temp;
	for(p=0;p<m-1;p++)
	{
		max = arr[0];
		maxind = 0;
		for(j=0;j<m-p;j++)
		{
			if(arr[j]>max)
			{
				max = arr[j];
				maxind = j;
			}
		}
		//printf("%d %d\n",maxind,j-1);
		temp = arr[maxind];
		arr[maxind] = arr[j-1];
		arr[j-1] = temp;
	}

}