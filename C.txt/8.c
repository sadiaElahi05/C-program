#include<stdio.h>
void main()
{
    int score;
    printf("Enter your score:");
    scanf("%d",&score);
    if((score>=90)&&(score<=100))
        printf("\n Your grade is A.");
    else if((score<90)&&(score>=80))
    printf("\n Your grade is B.");
    else if((score<80)&&(score>=70))
        printf("\n Your grade is C.");
    else if((score<70)&&(score>=60))
        printf("\n Your grade is D.");
    else
        printf("\n Your grade is F.");
    return 0;
}
