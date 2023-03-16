#include<stdio.h>
main()
{
    int row,col,n,x;
    printf("Enter the number:");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        x=1;
        for(col=0;col<=row;col++)
        {
            printf("%d",x);
            x=(x*(row-col)/(col+1));
        }
        printf("\n");
    }
}
