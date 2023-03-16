#include<stdio.h>
void pattern(n)
{
    int row,col,k=1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    pattern (n);
}

