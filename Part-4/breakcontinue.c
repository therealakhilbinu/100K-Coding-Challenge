/*
#include<stdio.h>
void main()
{
    int i,n=10;
    for(i=0;i<n;i++)
    {
        printf(" \n hi ");
        if(i==5)
        break;
        
    }
    printf("hello \n");
}

--------Break o/p -----
                         
hi                         
hi
hi
hi
hi
hi hello
*/

#include<stdio.h>
void main()
{
    int i,n=10;
    for(i=0;i<n;i++)
    {
        printf(" \n hi ");
        if(i==5)
        continue;
     printf(" hello ")   ;
    }
  //  printf("hello \n");
}