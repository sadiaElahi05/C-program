#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the last number:\n");
    scanf("%d",&n);
    printf("1+3+5+...+%d",n);
    sum=n*n;
    printf(" =%d\n",sum);
}
