#include<stdio.h>


 /*int number(){

 int num=30;
 return num;

 }

 void main(){


     int num1 = number();

     printf("number is %d",num1);


 }
*/


int sumof2(){

 int num1,num2,sum;
 printf("Enter two numbers to find sum : ");
 scanf("%d%d",&num1,&num2);
 sum=num1+num2;
 return sum;

}

void main(){

    int sum2 = sumof2();

    printf("sum of two numbers is : %d " ,sum2);


}
