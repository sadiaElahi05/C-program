
#include<stdio.h>
int  BAN(int no)
{
    int re,binary=0,i=1,var;
    var=no;
    while(no!=0)
    {
        re=no%2;
        no=no/2;
        binary=binary+(re*i);
        i=i*10;
    }

    return binary;
}

  int main()
{
    int no,binary;
    printf("\n\n Enter a integer number:\n");
    scanf("%d",&no);

    binary=BAN(no);
    printf("\n\t Binary number is %d",binary);
}
