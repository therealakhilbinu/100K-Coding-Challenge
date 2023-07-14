#include<stdio.h>
void main()
{
    int size,array[100],i,temp,j;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("enter the elements of array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size-1;++i)
    {
for(j=i+1;j<size;++j)
{
    if (array[i]<array[j])
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
    }
printf("array sorted in descending order is : ");
    for(i=0;i<size;i++)
    
    {
printf(" %d ",array[i]);
    } 
}