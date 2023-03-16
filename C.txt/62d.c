#include<stdio.h>
int SUM(int n)
{
    int i,sum=0;

    for(i=2;i<=n;i++)
    {
      sum=sum+(i*i);
    }

    return sum;
}
int main()
{
    int n,i,sum=0;
    printf("Enter the last number:\n");
    scanf("%d",&n);
    sum=SUM(n);
    printf("Summation of the series %d\n",sum);
}
