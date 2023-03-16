#include<stdio.h>
int SUM(int n)
{
    int i,s=0;
    for(i=2;i<=n;i++)
    {
        s=s+(i-1)*i;
    }

    return s;

}
void main()
{
    int n,i,s=0;
    printf("Enter value of last number\n");
    scanf("%d",&n);
    s=SUM(n);
     printf("The sum of the series %d",s);
}

