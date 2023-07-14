#include<stdio.h>
void main()
{
    int array[20][20],size,i,j;
    printf("enter the size of array : ");
    scanf("%d",&size);
    printf("enter the values of row order : ");
    for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&array[i][j]);
    }
}
printf("enetered value in array are : \n");
 for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        printf(" %d ",array[i][j]);
    }
    printf("\n");
}
}