#include<stdio.h>
void SUM(int n)
{
    float sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("Sum of series:%f",sum);
    return 0;
}
int main()
{
    int n;
    printf("Enter the value of last number:\n");
    scanf("%d",&n);
    SUM(n);
}



