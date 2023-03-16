#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter value of last number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        s=s+(i-1)*i;
    }
    printf("The sum of the series %d",s);
    return 0;

}
