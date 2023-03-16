#include<stdio.h>
int main()
{
    int integer,octal,i,unit;
    printf("Enter the integer value=\n");
    scanf("%d",& integer);
    octal=0;
    i=1;
    while(integer!=0)
    {
        unit=integer%8;
        octal=octal+unit*i;
        integer=integer/8;
        i=i*10;
    }
    printf("The number in octal=%d\n",octal);
    return 0;
}
