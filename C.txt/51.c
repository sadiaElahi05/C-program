#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input three number\n");
    scanf("%d%d%d",&a,&b,&c);
    NUM(a,b,c);
}



    void NUM( int a,int b,int c)
{

    if(a>=b && a>=c)
        printf("%d is the largest number",a);
    else if(b>=a && b>=c)
        printf("%d is the largest number",b);
    else
        printf("%d is the largest number",c);
        return 0;
}
