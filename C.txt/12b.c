#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0||i%5==0)
        {
            printf("Number divisible by 3 or 5 is %d\n",i);
        }

    }

}
