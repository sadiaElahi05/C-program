#include<stdio.h>
main()
{
    int n,s;
    printf("Enter a number:\n");
    scanf("%d",&n);
    s=n*(n+1)*(2*n+1)/6;
    printf("Sum of the series %d",s);
    return 0;
}
