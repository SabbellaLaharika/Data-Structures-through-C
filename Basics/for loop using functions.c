#include<stdio.h>
void num(int x,int y)
{ 
    int i;
    for(i=x;i<=y;i++)
    {
    	printf("%d ",i);
	}
}
int main()
{
	int a = 100,b=120;
	num(a,b);
	printf("\n");
	int c = 50,d = 75;
	num(c,d);
}