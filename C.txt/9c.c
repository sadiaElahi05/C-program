#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the last number:\n");
    scanf("%d",&n);
    printf("2+4+6+...%d",n);
    sum=(n*(n+1));
    printf(" =%d\n",sum);
}
