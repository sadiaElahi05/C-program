#include<stdio.h>
int main()
{
     int a[50],count,c,n,i,j,sum=0;
     printf("Enter the no of elements:\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     count=0;
     printf("\n Prime numbers are:\n");
     for(i=0;i<n;i++)
     {
         c=0;
         for(j=2;j<a[i];j++)
         {
             if(a[i]%j==0)
             {
                 c=1;
                 break;
             }
         }
         if(c==0)
         {
             printf("%d\t",a[i]);
             sum=sum+a[i];
             count++;
         }
     }
     printf("\n The number of prime numbers is %d",count);
     printf("\n The sum of prime no is %d",sum);

}
