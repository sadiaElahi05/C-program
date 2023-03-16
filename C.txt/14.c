#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
    }
        if(p==1)
            printf("%d is prime number",n);

    else

        printf("%d is not prime number",n);

    return 0;
}
