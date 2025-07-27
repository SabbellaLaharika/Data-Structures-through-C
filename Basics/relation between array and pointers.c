
// addresses of a integers
#include<stdio.h>
int main()
{
	//  memory  101   105  109    113   117
	int a[5] = {10   ,20   ,30   ,40   ,50};
	// ind       0  1  2  3  4
	// printf("%d bytes", sizeof(a));
	/* name of array itself acts as a pointer.
	and it points to first element in the array */
    printf("%d %d\n",a,&a[0]);
    printf("%d %d %d %d %d\n",a,a+1,a+2,a+3,a+4); //pointer arithmetic
    printf("%d %d %d %d %d\n",*a,*(a+1),*(a+2),*(a+3),*(a+4));
    printf("%d %d %d %d %d\n",*a,*a+1,*a+2,*a+3,*a+4); // here we deferencing only the a[0] element
}

/*
// addresses of a characters
#include<stdio.h>
int main()
{
	//  memory  101   102  103    104   105
	int a[5] = {'a' ,'b' ,'#' ,'@' ,' '};
	// ind       0  1  2  3  4
	// printf("%d bytes", sizeof(a));
	/* name of array itself acts as a pointer.
	and it points to first element in the array 
    printf("%d %d\n",a,&a[0]);
    printf("%d %d %d %d %d\n",a,a+1,a+2,a+3,a+4); //pointer arithmetic
    printf("%d %d %d %d %d\n",*a,*(a+1),*(a+2),*(a+3),*(a+4));
    printf("%d %d %d %d %d\n",*a,*a+1,*a+2,*a+3,*a+4); // here we deferencing only the a[0] element
}
*/