#include<stdio.h>
void main()
{
    float a,b,c,avg;
    printf("enter three numbers to find average : ");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("average of three numbers is %f : " ,avg);
}