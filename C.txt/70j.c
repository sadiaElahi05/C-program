#include<stdio.h>
 void pattern(int n)

{
    int row,col,x;
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
     return 0;
}
 int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    pattern(n);
}
