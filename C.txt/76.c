#include<stdio.h>
void SUMM(int i,int s,int a[4],int b[5])
{
    for(i=0;i<4;i++)
        s+=a[i];
    for(i=0;i<5;i++)
        s+=b[i];
    printf("\n Sum of two array:%d ",s);

}
main()
{
    int i,s=0,a[4]={8,9,7,5},b[5]={1,2,3,5,6};
    SUMM(i,s,a,b);
}
