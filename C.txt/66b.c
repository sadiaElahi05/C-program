#include<stdio.h>
 int SUR( int n)
{
    int c,sum=0,array[100];

    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
        sum+=array[c];
    }

    return sum;
}
int main()
{
    int n,sum=0,c,array[100];
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    printf("\n\n Enter the integers\n\n");
   sum=SUR(n);
    printf("\n Sum=%d\n",sum);
}
