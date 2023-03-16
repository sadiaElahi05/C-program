#include<stdio.h>
#define sym 1.8
 FC(int f)
{
    float c;
    c=(f-32)/sym;

    return c;
}


  main()

{
   float c,f;
   printf("Enter temperature in Fahrenheit\n ");
    scanf("%f",&f);
    c=FC(f);
    printf(" Temperature in celsius:%f\n",c);

}
