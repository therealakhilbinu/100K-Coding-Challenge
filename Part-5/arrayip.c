#include<stdio.h>
void main()
{
    int array[10],i;
    printf("enter the values : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("array values are : ");
    for(i=0;i<5;i++)
    {
printf(" %d ",array[i]);
    }
    
}