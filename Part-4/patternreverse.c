#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the number of line : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
      for(j=0;j<=n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
*******
*****

for(i=1;i<=n;i++)
{
    for(j=n;j<=1;j--);
}

*/