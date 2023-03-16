#include<stdio.h>
main()
{
    int a,s;
    printf("Enter your desire integer input:");
    scanf("%d",&a);
    printf("\n\n The reverse form of input=");
    while(a!=0)
    {
        s=a%10;
        printf("%d",s);
        a=a/10;
    }
    return 0;
}
