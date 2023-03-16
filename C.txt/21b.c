#include<stdio.h>
int main()
{
    int n,sum=0,c,array[100];
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    printf("\n\n Enter the integers\n\n");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
        sum+=array[c];
    }
    printf("\n Sum=%d\n",sum);
    return 0;
}

