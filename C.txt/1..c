#include<stdio.h>
void main()
{
    int code;
    float side,base,length,breadth,height,area,radius;
     printf("1 For circle\n");
     printf("2 For Rectangle\n");
     printf("3 For Triangle\n");
     printf("4 For square\n");

     printf("Enter the figure code\n");
     scanf("%d",&code);
     switch(code)
     {
     case 1:
        printf("Enter the radius\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("Area of a circle=%f\n",area);
        break;
     case 2:
        printf("Enter the breath and length\n");
        scanf("%f%f",&breadth,&length);
        area=breadth*length;
        printf("Area of a Reactangle=%f\n",area);
        break;
     case 3:
        printf("Enter the base and height\n");
        scanf("%f",&base,&height);
        area=0.5*base*height;
        printf("Area of a triangle=%f\n",area);
        break;
     case 4:
        printf("Enter the side\n");
        scanf("%f",&side);
        area=side*side;
        printf("Area of a square=%f\n",area);
        break;
     default:
        printf("Error in figure code\n");
        break;
     }
}
