#include<stdio.h>
 MATRIX(r1,c1,r2,c2)

{
    int i,j,k,a[10][10],b[10][10],c[10][10];
    if(c1==r2)
    {
        printf("Enter the matrix1\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                 scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the matrix2\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }

        }
        printf("Product of matrices\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

}
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the no of the rows & cols of matrix1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no of the rows & cols of matrix2:");
    scanf("%d%d",&r2,&c2);
    MATRIX(r1,c1,r2,c2);
}



