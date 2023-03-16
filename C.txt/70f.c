#include<stdio.h>
pattern(int n)
{
    int row,col,k=1;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }




    for(col=row-1;col>=1;col--)
    {
        printf("%d",col);
    }


    printf("\n");
    }

return 0;
}
int main()
{
    int n;
    printf("Enter N=");
    scanf("%d",&n);
    pattern(n);
}

