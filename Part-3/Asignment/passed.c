#include<stdio.h>
void main()
{
    float mark;
    printf("enter your mark out of 100 : ");
    scanf("%f",&mark);
    if(mark>=50)
    printf("\nyou have passed the exam");
    else
    printf("\nyou have failed the exam");

}