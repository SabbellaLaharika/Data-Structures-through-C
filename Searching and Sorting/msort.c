#include<stdio.h>
void merge(int *a,int l,int h)
{
	int i,j,m,k[h-l+1],p=0;
	m=(l+h)/2;
	i=l;
	j=m+1;
	while(i<=m && j<=h)
	{
		if(a[i]>a[j])
		{
			k[p++]=a[j++];
		}
		else
		{
			k[p++]=a[i++];
		}
	}
	while(i<=m)
	{
		k[p++]=a[i++];
	}
	while(j<=h)
	{
		k[p++]=a[j++];
	}
	p=0;
	for(i=l;i<=h;i++)
	{
	    a[i]=k[p++];
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
   	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}