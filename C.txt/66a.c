#include<stdio.h>
int   SOR(int n)
{
    int sum=0,c,value;

    for(c=1;c<=n;c++)
    {
        scanf("%d",&value);
        sum=sum+value;
    }

    return sum;
}
int main()
{
    int n,sum;
    printf("Add the numbers\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    sum=SOR(n);
    printf("Sum of the integers=%d\n",sum);
}
