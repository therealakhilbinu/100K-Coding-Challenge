#include<stdio.h>
void main()
{
    int i,j,size,array1[100][100],array2[100][100],sum=0;
    printf("Enter the size of arrays : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
          scanf("%d",&array1[i][j]);
            
        }
        printf("\n");
    }
        for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
          scanf("%d",&array2[i][j]);
            
        }
        printf("\n");
    }
    printf("sum is : %d",sum);
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            
            sum=array2[i][j]+array1[i][j];
            
        }
        printf("\n");
    }
    
}