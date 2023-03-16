#include<stdio.h>
void main()
{
    int n,i=0,j=0,c=0,x,a[30];
    printf("Enter Integer Number:");
    scanf("%d",&x);
    while(x!=0)
    {
        a[i++]=x%10;
        x=x/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for( j=c-1-i;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
}
