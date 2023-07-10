#include<stdio.h>
void main()
{
    int choice;
    printf("\nenter a number ranges from 1 to 7");
    printf("\nenter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("sunday");
        break;
        case 2: printf("monday");
        break;
        case 3 : printf("tuesday");
        break;
        case 4: printf("wednesday");
        break;
        case 5: printf("Thursday");
        break;
        case 6: printf("Friday");
        break;
        case 7: printf("Saturday");
        break;
        default:
        printf("no option thank you");
    }
}