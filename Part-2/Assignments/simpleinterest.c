//Write a program to find the simple interest.
//Program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(P*R*n)/100)

//Principal amount (P) Integer
//Interest rate (R) Float
//Number of years (n) Float
//Simple Interest (SI) Float

#include<stdio.h>
void main()
{
    int p;
    float r,n,si;
    printf("enter the principal amount");
    scanf("%d",&p);
    printf("enter the interest rate and number of years");
    scanf("%f%f",&r,&n);
    si=(p*r*n)/100;
    printf("simple interest is : %f",si);
}





