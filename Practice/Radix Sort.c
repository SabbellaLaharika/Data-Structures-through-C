#include<stdio.h>
void countsort(int *a,int n,int pos);
void radixsort(int *a,int n);
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for( i = 0; i < n; i++ )
	{
		scanf("%d",&a[i]);
	}
	radixsort(a,n);
	for( i = 0;i < n;i++ )
	{
		printf("%d ",a[i]);
	}
}
void countsort(int *a,int n,int pos)
{
	int cnt[10] = {0},b[n],i;
	for ( i = 0; i < n; i++ )
	{
		++cnt[(a[i]/pos)%10];
	}
	for ( i = 1; i < 10; i++ )
	{
		cnt[i] += cnt[i-1];
	}
	for ( i = n-1; i >= 0; i-- )
	{
		b[--cnt[(a[i]/pos)%10]] = a[i] ;
	}
	for ( i = 0; i < n; i++ )
	{
		a[i] = b[i];
	}
}
void radixsort(int *a,int n)
{
	int max,pos;
	max = a[0];
	for ( pos = 0; pos < n; pos++ )
	{
		if(max < a[pos])
		{
			max = a[pos];
		}
	}
	for(pos = 1;(max/pos) > 0;pos*=10)
	{
		countsort(a,n,pos);
	}
}