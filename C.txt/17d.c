#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last number:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
      sum=sum+(i*i);
    }
        printf("Summation of the series %d\n",sum);
    return 0;
}
