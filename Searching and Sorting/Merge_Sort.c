#include<stdio.h>
void merge(int *a,int L,int H,int M);
void merge_sort(int *a,int L,int H);
int main()
{
    int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	for( i = 0; i < n; i++ )
	{
		printf("%d ",a[i]);
	}
}
void merge(int *a,int L,int H,int M)
{
	int i=L,j=M+1,k=0,res[H-L+1];
	while(i<=M&&j<=H)
	{
		if(a[i]>a[j])
		{
			res[k++]=a[j++];
		}
		else
		{
			res[k++]=a[i++];
		}
	}
	while(i<=M)
	{
		res[k++]=a[i++];
	}
	while(j<=H)
	{
		res[k++]=a[j++];
	}
	k=0;
	for(i=L;i<=H;i++)
	{
		a[i]=res[k++];
	}
}
void merge_sort(int *a,int L,int H)
{
	if(L<H)
	{
		int M;
		M = (L+H)/2;
		merge_sort(a,L,M);
		merge_sort(a,M+1,H);
		merge(a,L,H,M);
	}
}