
#include<stdio.h>
int SUM(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
    sum=sum+i*(i+1)*(i*(i+1));
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter the element of nth term:\n");
    scanf("%d",&n);
    sum=SUM(n);

    printf("Summation is%d",sum);
}
