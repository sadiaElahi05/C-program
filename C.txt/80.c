#include<stdio.h>
int OCT( int integer)
{
    int octal,i,unit;
    octal=0;
    i=1;
    while(integer!=0)
    {
        unit=integer%8;
        octal=octal+unit*i;
        integer=integer/8;
        i=i*10;
    }

    return octal;
}
int main()
{
    int integer,octal;
    printf("Enter the integer value=\n");
    scanf("%d",& integer);
    octal=OCT(integer);
    printf("The number in octal=%d\n",octal);
}
