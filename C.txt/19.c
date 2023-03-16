#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if((i*i)>0&&(i*i)<1000000000)
        printf(" Square number=%d\n",i*i);
    }
    return 0;
}
