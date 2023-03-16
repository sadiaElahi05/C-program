#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("Summation of the series is %d",s);
    return 0;
}
