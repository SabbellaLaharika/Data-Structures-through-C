#include<stdio.h>
struct Point
{
   int x;
   int y;	
};
void modify(struct Point p)//p1 is being copied to p
{
	p.x = 10;
	p.y = 20;
}
int main()
{
	struct Point p1;
	p1.x = 4;
	p1.y = 5;
	printf("Before modification : %d %d\n",p1.x,p1.y);
	modify(p1);
	printf("After modification : %d %d",p1.x,p1.y);
}