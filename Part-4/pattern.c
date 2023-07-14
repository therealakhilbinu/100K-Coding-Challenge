#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter number of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            
            printf(" *");
        }
        printf("\n");
    }

}