#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        s=s+i;
    }
    printf("summation =%d",s);
    return 0;
}
