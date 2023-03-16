#include<stdio.h>
 void qnum(int a,int b,int c)
{
    float x1,x2,d;
    if(a==0)
    {
        printf("\n This is not a quadratic equation");
    }
    d=(b*b)-(4*a*c);

    if(d==0)
    {
      printf("The roots are real and equal");
      x1=x2=-b/(2*a);
      printf("x1=%f x2=%f",x1,x2);
    }
    else if(d>0)
    {
        printf("The roots are real and unequal");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f x2=%f",x1,x2);
    }
    else
        printf("The roots are IMAJINARY");

}
 int main()
{
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    qnum(a,b,c);
}

