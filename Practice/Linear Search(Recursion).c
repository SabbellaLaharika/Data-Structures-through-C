#include<stdio.h>
int linearsearch(int *ar,int size,int i,int sea);
int main()
{
	int n,a[100],res,i,key;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	res = linearsearch(a,n,0,key);
	if (res != -1)
	printf("Element found at %d index",res);
	else
	printf("Element not found");
}
int linearsearch(int *ar,int size,int i,int searc)
{
	if (i == searc)
	return -1;
	if ( ar[i] == searc)
	return i;
	linearsearch(ar,size,i+1,searc);
}