#include<stdio.h>
void tower(int,char,char,char);
int main()
{
    int n;
    printf("Enter no of disks\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
void tower(int n,char sou,char aux,char des)
{
    if(n==1)
        printf("Move form tower %c to tower %c\n",sou,des);
    else
    {
        tower(n-1,sou,des,aux);
        tower(1,sou,aux,des);
        tower(n-1,aux,sou,des);
    }
}
