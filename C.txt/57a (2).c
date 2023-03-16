#include<stdio.h>
NUM(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            printf("Number divisible by 3 and 5 are %d\n",i);
        }

    }

}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    NUM(n);
}
