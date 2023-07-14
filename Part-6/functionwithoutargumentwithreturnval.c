#include<stdio.h>
int sum();
int main(void)
{
int k;
k=sum();
printf("%d ",k);


}
int sum()
{
    int num1,num2,sum;
    printf("entern two numbers to find sum : ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    return sum;
}