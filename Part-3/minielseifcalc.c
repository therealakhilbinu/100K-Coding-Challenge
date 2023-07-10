#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf(" 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division \n Enter your choice : ");
    int choice,sum,sub,mult,div;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n Additon operation");
        sum=a+b;
        printf("\nsum of two numbers is %d: ",sum );
    }
    else if (choice ==2)
    {
        printf(" \n subtraction operation");
        sub=a-b;
        printf("\nsubtraction of two numbers is %d: ", sub);
    }
    else if (choice ==3)
    {
        printf("\nMultiplication Operation");
        mult=a*b;
        printf("\nmultiplication of two numbers is %d: ",mult);
    }
    else if (choice ==4)
    {
        printf(" \nDivison Operation");
        div = a/b;
        printf("\nDivised value of two number is : %d",div);

    }
    else{
        printf("no option thank you");
    }
}