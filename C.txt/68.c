#include<stdio.h>
SUM(int temp,int digit,int sum)
{

    int num;
    printf("Enter your desire input=\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;

    }
    printf("Given number =%d\n",temp);
    printf("Sum of digits %d=%d\n",temp,sum);

}
main()
{
   int temp,digit,sum=0;
   SUM(temp,digit,sum);
}
