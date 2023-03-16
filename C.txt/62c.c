#include<stdio.h>
int SUM(int n)
{
    int i,s=0;

    for(i=2;i<=n;i=i+2)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int n,i,s=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    s=SUM(n);
   printf("Summation of the series is:%d",s);
}
