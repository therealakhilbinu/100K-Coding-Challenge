#include<stdio.h>
void main()
{
    int size,array[100],i,temp,j;
    printf("enter the size of array : ");
    scanf("%d",&size);
    printf("enter the values to be inserted : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("element in the array are : ");
    for(i=0;i<size;i++)
    {
        printf(" %d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("sorted array is : ");
    for(i=0;i<size;i++)
    {
        printf(" %d ",array[i]);
    }
}