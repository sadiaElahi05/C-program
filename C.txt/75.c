#include<stdio.h>

int GL(int num1,int num2)
{
    int n1,n2,rem,gcd,lcm;
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    printf("GCD=%d\n",gcd);
    printf("LCM=%d\n",lcm);
}
int main()
{
    int num1,num2,gcd,lcm;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    GL(num1,num2);
}
