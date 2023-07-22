#include<stdio.h>
void main()
{
    int i,j,size,array1[100][100],array2[100][100],sum=0;
    printf("Enter the size of arrays : ");
    scanf("%d",&size);
  printf("Enter the elements of first array : ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
          scanf("%d",&array1[i][j]);
            
        }
        printf("\n");
    }
    printf("Enter the element of second array : ");
        for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
          scanf("%d",&array2[i][j]);
        
            
        }
        printf("\n");
    }
    
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
           
            printf("%d ",array1[i][j]);
            

      
            
        }
        printf("\n");
  
    }
    printf("\n \n");
         for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
           
           
             printf("%d ",array2[i][j]);

      
            
        }
        printf("\n");
  
    }printf("sum of array is : ");
           for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
           
           sum=array1[i][j]+array2[i][j];
           printf("%d ",sum);
          

      
            
        }

        printf("\n");
  
    }
    
    
}