#include<stdio.h>
int main()
{  int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    NUM(i,N);
}
    void NUM( int i,int N)
    {
       int n;

    for(i=1;i<=N;i++)
    {
        if(i>0&&i<1000000)
            printf("%d\n",i);
    }
    }

