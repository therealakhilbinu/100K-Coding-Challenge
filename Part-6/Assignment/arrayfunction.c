#include<stdio.h>
void getArray(int[],int);
void displayArray(int[],int);
int main()
{
 int size,array[100];
 printf("Enter the size of array : ");
 scanf("%d",&size);
 int arr[size];
 int *p = arr;
 getArray(p,size);
 displayArray(p,size);
 return 0;

}

void getArray(int array[],int size)

{


    int i;
    printf("Enter the elements of arrray : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
}

void displayArray(int array[],int size)
{
    int i;
    printf("Element in the array are : ");

    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
