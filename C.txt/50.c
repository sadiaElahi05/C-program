#include<stdio.h>
void ov(int n)

{
    if(n%2==0)
    {
        printf("%d is an even number\n",n);
    }
    else
    {
        printf("%d is an odd number\n",n);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a integer number:\n");
    scanf("%d",&n);
    ov(n);

}

