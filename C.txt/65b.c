#include<stdio.h>
 int LARG(int size)
{
    int arr[50],i,largest;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        largest=arr[0];
    }
        for(i=1;i<size;i++)
        {
            if(largest<arr[i])
                largest=arr[i];
        }

        return largest;

}
int main()
{
    int size,largest;
    printf("\nEnter the size of the array:\n");
    scanf("%d",&size);
    printf("\n Enter %d element of the array :",size);
   largest =LARG(size);
    printf("\n Largest elements present in the given number\n%d",largest);
}


