#include<stdio.h>
void merge(int *a,int *b,int m,int n);
int main()
{
    int m,n,i,j;
	scanf("%d  %d",&m,&n);
	int a[m],b[n];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	merge(a,b,m,n);
}
void merge(int *a,int *b,int m,int n)
{
	int res[100] = {0};
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]>b[j])
		{
			res[k]=b[j];
			j++;
			k++;
		}
		else
		{
			res[k]=a[i];
			i++;
			k++;
		}
	}
	while(j<n)
	{
		res[k]=b[j];
		j++;
		k++;
	}
	while(i<m)
	{
		res[k]=a[i];
		i++;
		k++;
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d ",res[i]);
	}
}