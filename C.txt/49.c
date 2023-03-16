#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    PN(n);
    return n;
}
int PN (n)
{
    if(n>=0)
    {
        printf("The number is positive");
    }
        else
            printf("The number is negative");

    return 0;

}

