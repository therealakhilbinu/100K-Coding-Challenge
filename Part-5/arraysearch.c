#include<stdio.h>
void main()
{
    int size,array[100],i,searchkey,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("enter the values to be inserted : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the elements to be searched : \n");
    scanf("%d",&searchkey);
    for(i=0;i<size;i++)
    {
        if(searchkey==array[i]){
  flag=1;
        break; 
    
        }
      
    }
  if(flag==1)
  
  printf("element is found %d : ",i+1);
  else
  printf("element is not found");
}