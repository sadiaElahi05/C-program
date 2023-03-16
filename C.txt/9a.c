#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    printf("1+2+3+..+%d",n);
    sum=n*(n+1)/2;
    printf(" =%d\n",sum);


}
