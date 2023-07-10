#include<stdio.h>
void main()
{
    printf("1 for Porotta \n 2 for Biriyani \n 3 for Fried Rice \n 4 for Mandi \n Enter your choice");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        
        printf("you have selected Porotta");
        break;

        case 2:
        
        printf("you have selected biriyani");
        break;

        case 3:

        printf("you have selected fried rice");
        break;

        case 4:
        
        printf("you have selected mandhi");
        break;

        default:printf("no option thankyou");


        

    }
}