#include<stdio.h>
 void pattern(int n)
{
    int row,col;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",row);
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
