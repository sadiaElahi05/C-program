#include<stdio.h>
pattern (int n)
{
    int i,j,p,q;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            p=1;q=0;
        }
        else
        {
            p=0;q=1;
        }
        for(j=1;j<=i;j++)
            if(j%2==0)
            printf("%d",p);
        else
            printf("%d",q);
        printf("\n");
    }
    return 0;
}
int main()
{
    int i,j,n,p,q;
    printf("Input number of rows:");
    scanf("%d",&n);
    pattern(n);
}

