#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {   printf("\n");
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
    }
    for(i=(n-1);i>0;i--)
    {   printf("\n");
        for(j=i;j>0;j--)
        {
            printf("* ");
        }
    }
    return 0;

}
