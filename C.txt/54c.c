#include<stdio.h>
void NUM(int n)
{
    int sum=0;
    sum=(n*(n+1));
    printf(" =%d\n",sum);
    return 0;
}
int main()
{
    int n;
    printf("Enter the last number:\n");
    scanf("%d",&n);
    printf("2+4+6+...%d",n);
    NUM(n);
}

