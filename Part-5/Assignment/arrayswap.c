#include<stdio.h>
void main()
{
    int i,arr1[100],arr2[100],size1,size2;
    int temp;
    printf("enter the size of 1st array : ");
    scanf("%d",&size1);
    printf("enter the values of 1st array : ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of 2nd array : ");
    scanf("%d",&size2);
    printf("Enter the values of 2nd array : ");
    for(i=0;i<size2;i++)
    {
    scanf("%d",&arr2[i]);
    }
for(i=0;i<size1;i++)
{
    temp=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
}
printf("values of 1st array after swapping : ");
for(i=0;i<size1;i++)
{
    printf(" %d ",arr1[i]);
}
printf("values of 2nd array after swapping : ");
for(i=0;i<size2;i++)
{
    printf(" %d ",arr2[i]);
}

}