#include<stdio.h>
  void REV(a)
{
    int s;
    while(a!=0)
    {
        s=a%10;
        printf("%d",s);
        a=a/10;
    }
    return 0;
}
 int main()
  {
   int a;
    printf("Enter your desire integer input:");
    scanf("%d",&a);
    printf("\n\n The reverse form of input=");
    REV(a);
  }

