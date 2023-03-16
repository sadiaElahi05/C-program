#include<stdio.h>
int main()
{
    int size,i,largest,smallest;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int x[size];
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    largest=x[0];
    for(i=1;i<size;i++)
    {
        if(x[i]>largest)
            largest=x[i];
    }
    smallest=x[0];
    for(i=1;i<size;i++)
    {
        if(x[i]<smallest)
            smallest=x[i];
    }
    printf("Largest value is:%d\n",largest);
    printf("Smallest value is:%d",smallest);
    return 0;
}
