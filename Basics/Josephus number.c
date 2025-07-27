/*#include<stdio.h>
int main()
{
	int n,d,j;
	scanf("%d",&n);
	//x=2^y;
	//d=n-x;
	//j=2*d+1
	int x=1;
	while(x*2<n)
	{
		x*=2;
	}
	printf("x = %d\n",x);
	d = n-x;
	j = 2*d+1;
	printf("Josephus position is %d",j);
}
*/
//other way of finding josephus
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,d,j;
	scanf("%d",&n);
	//x=2^y;
	//d=n-x;
	//j=2*d+1
    x = pow(2,31-__builtin_clz(n));
	printf("x = %d\n",x);
	d = n-x;
	j = 2*d+1;
	printf("Josephus position is %d",j);
}