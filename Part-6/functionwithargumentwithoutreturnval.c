#include<stdio.h>
void sum(int ,int );
int main(void){
int num1,num2;
printf("\n Enter two numbers : ");
scanf("%d%d",&num1,&num2);
sum(num1,num2);
sum(num1,num2);



}

void sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("\n result is : %d",sum);
}