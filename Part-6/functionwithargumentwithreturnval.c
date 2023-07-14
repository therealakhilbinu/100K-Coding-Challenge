#include<stdio.h>
int sum(int,int);
int main(void)
{
    int num1,num2,c;
    printf("enter the numebrs to find sum : ");
    scanf("%d%d",&num1,&num2);
    c=sum(num1,num2);
    printf("sum  is : %d",c);
    
}

int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}