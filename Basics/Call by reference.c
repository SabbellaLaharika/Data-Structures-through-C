#include<stdio.h>
void modify(int *x)// integer pointer
{ 
    // 100 will be copied into x
	//*x=*x+1;
	*x+=1;
    //printf("%d",&a);
}
int main()
{
	int a = 100;
	//printf("%d\n",&a);
	printf("before modification: %d\n",a);
	modify(&a);// call by ref
	printf("after modification: %d",a);
}