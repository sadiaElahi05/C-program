#include<stdio.h>
void  NUM( int n)
  {
     int i;

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
   }
int main()
{
    int n;
    printf("Enter any  number:\n");
    scanf("%d",&n);
    printf("Print numbers from 1 to %d\n",n);
    NUM(n);
}

