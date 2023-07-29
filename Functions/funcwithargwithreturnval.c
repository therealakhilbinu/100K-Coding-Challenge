#include<stdio.h>



int sum(int num1,int num2){

int sum;
sum=num1+num2;


}
void main(){

int no1,no2,sum1;
printf("enter two numbers : ");
scanf("%d%d",&no1,&no2);
sum1=sum(no1,no2);
printf("sum of two numbers is : %d",sum1);


}
