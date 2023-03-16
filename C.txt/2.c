#include<stdio.h>
#define sym 1.8
main()
{
    float f,c;
    printf("Enter temperature in Celsius ");
    scanf("%f",&c);
    f=(sym*c)+32;
    printf("Temperature in Fahrenheit:%f\n",f);

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(f-32)/sym;
    printf("Temperature in Celsius:%f",c);


}
