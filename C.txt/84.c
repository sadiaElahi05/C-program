#include<stdio.h>
 void bubble(int num)

{
    int i,j,temp;
    int a[num];
    for(i=0;i<num;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
    for(j=0;j<num-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    printf("Ascending order of given numbers is\n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
 int main()
{
    int num;
    printf("Enter number of elements\n");
    scanf("%d",&num);
    int a[num];
    printf("Enter numbers\n");
    bubble(num);
}


