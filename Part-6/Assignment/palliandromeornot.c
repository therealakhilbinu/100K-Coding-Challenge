#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    int flag=0,length,i;
    printf("enter a string : ");
    scanf("%s",name);
    length=strlen(name);
    printf("length of string is : %d ",length);
    length=length+1;
    

    for(i=0;i<length;i++)
    {
        
        if(name[i]==name[length-i])
        {
           
            flag=1;
        }
    }
    
    
    if(flag==1){
    printf("String is a palliandrome");
    }
    else{
    printf("string is not a pallinadrome ");
    }
}