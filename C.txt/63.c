#include<stdio.h>
void main()
{
    int a,f,fact();
    printf("\nEnter a number:\n");
    scanf("%d",&a);
    f=fact(a);
    printf("\n The Factorial of %d is:%d",a,f);

}
int fact(int b)
{
    int i,f=1;
    for(i=1;i<=b;i++)
        f=f*i;
    return f;

}
