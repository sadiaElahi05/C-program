#include<stdio.h>
void prime(int n,int i,int j,int c,int p[10],int t,int a[10])
{

     printf("Enter array size:\n ");
     scanf("%d",&n);
     printf("\nEnter %d Numbers in Array:\n\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
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
               p[t]=a[i];
               t++;
          }
     }
     printf("\nPrime Numbers in Above Array:\n\n");
     for(i=0;i<t;i++)
     {
          printf(" %d ",p[i]);
     }
     return 0;
}
main()
{
        int a[10],n,i,j,c=0,p[10],t=0;
        prime(n,i,j,c,p,t,a);
}

