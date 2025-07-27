#include<stdio.h>
int main()
{
    int t,n,i,temp,rem,rev = 0;
    scanf("%d",&t);
    for ( i = 0; i < t; i++ )
    {
        scanf("%d",&n);
        temp = n;
        rev = 0;
        while(n != 0)
        {
            rem = n % 10;
            n /= 10;
            rev = rev*10 + rem;
        }
        if(rev == temp)
        printf("True\n");
        else
        printf("False\n");
    }
}