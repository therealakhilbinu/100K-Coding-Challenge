#include<stdio.h>
void main()
{
    int size,array[100],i,sum;
    printf("enter the size of array : ");
    scanf("%d",&size);
    printf("enter the values to be inserted : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
        
    }
    printf("sum of array is : %d ",sum);
    

}