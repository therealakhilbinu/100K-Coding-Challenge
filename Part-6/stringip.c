#include<stdio.h>
void main()
{
    char name[20];
    printf("enter your name : ");
   // scanf("%s",name);
  gets(name);
  
    printf("\n your name is : %s",name);
}