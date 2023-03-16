#include<stdio.h>
  void ITEM( int n)
{
    int arr[100],search,i;
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
            printf("Input an integer ITEM to search\n");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("ITEM is found at the location %d\n",search,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d ITEM is not found in the array\n",search);
    return 0;

}
 int main()
{

   int n;
    printf("Input the number of elements in array:\n");
    scanf("%d",&n);
    printf("Input %d integer element \n",n);
    ITEM(n);
}
