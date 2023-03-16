#include<stdio.h>
int main()
{
    int no,var,re,binary=0,i=1;
    printf("\n\n Enter a integer number:\n");
    scanf("%d",&no);
    var=no;
    while(no!=0)
    {
        re=no%2;
        no=no/2;
        binary=binary+(re*i);
        i=i*10;
    }
    printf("\n\t Binary equivalent of %d is %d",var,binary);
    return 0;
}
