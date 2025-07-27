#include<stdio.h>
void merge_ins(int *arr,int L,int H);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],res[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_ins(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void merge_ins(int *arr,int L,int H)
{
	int i,j,M,res[H-L+1],p=0;
	M=(L+H)/2;
	i=L;
	j=M+1;
	while(i<=M&&j<=H)
	{
		if(arr[i]>arr[j])
		{
			res[p++]==arr[j++];
		}
		else
		{
			res[p++]==arr[i++];
		}
	}
	while(i<=M)
	{
		res[p++]==arr[i++];
	}
	while(j<=H)
	{
		res[p++]==arr[j++];
	}
	p=0;
	for(i=L;i<=H;i++)
	{
		arr[i]=res[p++];
	}
}