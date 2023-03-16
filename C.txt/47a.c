#include<stdio.h>
#define sym 1.8
 FC(int c)
{
    float f;
    f=(sym*c)+32;

    return f;
}


  main()

{
   float c,f;
   printf("Enter temperature in Celsius ");
    scanf("%f",&c);
    f=FC(c);
    printf(" Temperature in Fahrenheit:%f\n",f);

}
