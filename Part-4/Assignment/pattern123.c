#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the number of lines : ");
    scanf("%d",&n);
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }*/
    n=n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}