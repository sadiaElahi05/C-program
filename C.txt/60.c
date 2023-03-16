#include<stdio.h>
void PNO(int n)
{
    int i ,fact,j;
    for(i=1;i<=n;i++)
    {
        fact=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d ",i);
    }
    return 0;
}
void main()
{
    int n,i ,fact,j;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Prime numbers are:\n");
    PNO(n);
}

