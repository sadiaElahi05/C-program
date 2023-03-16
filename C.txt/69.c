#include<stdio.h>
 REV(int i,int j,int c,int a[],int x)
{

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
    return 0;
}
 void main()
 {
     int i=0,j=0,c=0,a[30],x;
     REV(i,j,c,a,x);
 }

