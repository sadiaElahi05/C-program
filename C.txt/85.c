#include<stdio.h>
int towerhanoi(int limit,char source,char temporary,char destination)
{
    if(limit==1)
    {
        printf("\nMove disk %d from %c To %c\n",limit,source,destination);
        return 0;
    }
    towerhanoi(limit-1,source,destination,temporary);
    printf("Move Disk %d from %c to %c\n",limit,source,destination);
    towerhanoi(limit-1,temporary,source,destination);
    return 0;
}
int main()
{
    char source='A',temporary='B',destination='c';
    int limit;
    printf("\nEnter the number of Disk:\n");
    scanf("%d",&limit);
    printf("\n Sequence of disk\n");
    towerhanoi(limit,source,temporary,destination);
    printf("\n");
    return 0;
}
