#include<stdio.h>
void main()
{
    int f=1,n,i;
    printf("Enter the value=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("The Factorial of %d is=%d",n,f);
}
