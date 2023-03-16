
#include<stdio.h>
void NUM(int a,int b)
{
    int x,i;
    for(x=a+1;x<=b-1;x++)
    {
      if(x>0&&x<1000000000)
            for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)
            printf(" %d",x);

    }
    return 0;
}
int main()
{
    int a,b,i;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    NUM(a,b);
}
