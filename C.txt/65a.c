#include<stdio.h>
void  large(int a,int b,int c)
{

    if(a>b&&a>c)
        printf("%d is the largest number\n",a);
    else if(b>a&&b>c)
        printf("%d is the largest number\n",b);
    else
    printf("%d is the largest number\n",c);
}
int main()
{
    int a,b,c,i;
    printf("Input three number\n");
    scanf("%d %d %d",&a,&b,&c);
    large(a,b,c);
}

