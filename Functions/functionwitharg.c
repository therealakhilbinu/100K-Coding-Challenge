#include<stdio.h>

void hello(char name[]){

    printf("hi %s",name);

}

void hellonum(int num)
{
    printf(" your roll number is : %d ",num);
}
void main(){

    int num;
    printf("Enter a  number : ");
    scanf("%d",&num);

    hello("akhil");
    hellonum(num);
}
