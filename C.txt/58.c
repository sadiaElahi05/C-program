#include<stdio.h>
 void eod(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            {
            printf(" %d Number is even\n",i);
            }
        else
        {
            printf(" %d Number is odd\n",i);
        }
    }
    return 0;
}
 int main()
{
    int n;
    printf("Enter the value of number\n");
    scanf("%d",&n);
    eod(n);
}

