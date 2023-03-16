#include<stdio.h>
int SUM(int n)
{
    int i,s=0;
    for(i=1;i<=n;i=i+1)
    {
        s=s+i;
    }

    return s;
}

int main()
{
    int n,i,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    s=SUM(n);
    printf("summation =%d",s);
}
