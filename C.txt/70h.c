#include<stdio.h>
 void pattern (int n)
{
    int row,col,a=65;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",a);
            a++;
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
    printf("\n");
    pattern (n);
}
