#include<stdio.h>
void num(int x,int y)
{ int i=x-1;
    while(i<y)
    {
    	i++;
    	printf("%d ",i);
	}
}
int main()
{
	int a = 100,b=120;
	num(a,b);
	printf("\n");
	int c = 25,d = 50;
	num(c,d);
}