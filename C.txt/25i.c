#include<stdio.h>
main()
{
    int row,col,n;
    for(row=1;row<=4;row++)
    {
        for(col=1;col<=4-row;col++)

            printf(" ");

        for(col=1;col<= 2*row-1;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}
