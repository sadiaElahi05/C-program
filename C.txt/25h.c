#include<stdio.h>
main()
{
    int row,col,a=65,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\n");
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}
