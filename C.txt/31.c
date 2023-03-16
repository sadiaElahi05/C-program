#include<stdio.h>
void main()
{
    int i,sum=0,a[4]={4,6,7,8},b[5]={1,2,3,4,5};
    for(i=0;i<4;i++)
        sum+=a[i];
    for(i=0;i<5;i++)
        sum+=b[i];
    printf("\n Sum of two array:%d",sum);
}
