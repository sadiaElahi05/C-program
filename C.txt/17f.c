#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the element of nth term:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i*(i+1)*(i*(i+1));
    }
    printf("Summation is%d",sum);
    return 0;
}

