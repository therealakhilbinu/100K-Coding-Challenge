// Accept two inputs from the user and output its sum 
//num1 integer num2 float sum float



#include<stdio.h>
void main()
{
    int a;
    float b,sum;
    printf("enter the numbers for addition");
    scanf("%d%f",&a,&b);
    sum=a+b;
    printf("sum of two number is : %f",sum);
}