#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,n;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf(" Square\n",n);
    SQ(a,b);
}
    void SQ(int a,int b)
    {
       int i;

    for(i=a;i<=b;i++)
    {
        printf("%d\t %d\n",i,(i*i));
    }
    return 0;
   }
