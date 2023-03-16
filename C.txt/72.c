#include<stdio.h>
void ODD ()
{
    int i,n;
    printf("Enter the  number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("\n Odd Number is %d",i);
    }

}
main()
{
    int i,n;
    ODD();
}

