#include<stdio.h>
void main()
{
    int size,arr[100],i;
    int sum;
    printf("enter the size of array : ");
    scanf("%d",&size);
    printf("Enter the values to be inserted : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int count;
    printf("even number in the array is : \n");
for(i=0;i<size;i++)
{
    if(arr[i]%2==0)
    printf(" %d ",arr[i]);
    if(arr[i]%2==0)
    count++;
   
    
}
printf("\n number of even numbers in the array is : %d",count);
}