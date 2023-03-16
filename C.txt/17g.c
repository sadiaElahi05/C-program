
#include<stdio.h>
void main()
{
    int n;
    float sum=0,i;
    printf("Enter the value of last number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("Sum of series:%f",sum);
}
