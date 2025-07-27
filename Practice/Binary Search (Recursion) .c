#include<stdio.h>
int binarysearch(int *ar,int l,int h,int sea);
int main()
{
	int n,a[100],res,i,key;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	res = binarysearch(a,0,n-1,key);
	if (res != -1)
	printf("Element found at %d index",res);
	else
	printf("Element not found");
}
int binarysearch(int *ar,int l,int h,int searc)
{
	int mid;
	if (l > h)
	{
		return -1;
	}
	mid = (l+h)/2;
	if (ar[mid] == searc) 
	{
		return mid;
	}
	else if (ar[mid] < searc) 
	{
	    l = mid+1;
	}
	else 
	{
		h = mid-1;
	}
	return binarysearch(ar,l,h,searc);
}