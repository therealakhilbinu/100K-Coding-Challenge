#include<stdio.h>
void main()
{
    int array[10],limit,values,i;
    printf("enter the size of array : ");
    scanf("%d",&limit);
    printf("enter the values to be inserted : ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("array is : ");
    for(i=0;i<limit;i++)
    {
        printf(" %d ",array[i]);
    }

}