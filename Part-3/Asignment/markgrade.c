#include<stdio.h>
void main()
{
    float mark;
    printf("program to check your grade enter your mark");
    scanf("%f",&mark);
    if (mark>90)
    printf("your scored grade is A");
    else if(mark>80 && mark<89)
     printf("your scored grade is B");
    else if(mark>70 && mark<79)
      printf("your scored grade is C");

    else if(mark>60 && mark<69)
     printf("your scored grade is D");
     else if(mark>50 && mark<59)
      printf("your scored grade is E");
      else
       printf("Failed in your exam");
}