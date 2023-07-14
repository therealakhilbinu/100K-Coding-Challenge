#include<stdio.h>
void sum();
int main()
{

    sum();
    
sum();

}

void sum(){
    int num1,num2,sum;
    printf("\n enter the values to find : \n ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("\n sum is : %d ",sum);

}