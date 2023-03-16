#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any  number:\n");
    scanf("%d",&n);
    printf("Print numbers from 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
