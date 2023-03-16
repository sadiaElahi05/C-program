#include<stdio.h>
void SUM(int n)
{
    int sum=0;
    printf("1+2+3+..+%d",n);
    sum=n*(n+1)/2;
    printf(" =%d\n",sum);

return 0;
}
int main()
{
    int n;
    printf("Enter the last number:");
    scanf("%d",&n);
    SUM(n);
}

