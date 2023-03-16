#include<stdio.h>
main()
{
    int row,col,n,k=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
