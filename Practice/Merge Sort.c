#include<stdio.h>
void merge(int *a,int m,int *b,int n);
int main()
{
	int i,j,m,n,a[20],b[20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	mergesort(a,m,b,n);
}
void mergesort(int *a,int m,int *b,int n)
{
	int res[100] = {0};
	int i = 0, j = 0, k = 0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			res[k] = a[i];
			i++;
			k++;
		}
		else
		{
			res[k] = b[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		res[k] = a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		res[k] = b[j];
		j++;
		k++;
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d ",res[i]);
	}
	
}