#include<stdio.h>
int linearsearch(int *ar,int size,int sea);
int main()
{
	int n,a[100],res,i,key;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	res = linearsearch(a,n,key);
	if (res != -1)
	printf("Element found at %d index",res);
	else
	printf("Element not found");
}
int linearsearch(int *ar,int size,int searc)
{
	int j;
	for ( j = 0; j < size; j++ )
	{
		if ( ar[j] == searc)
		return j;
	}
	return -1;
}