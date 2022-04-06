#include<stdio.h>
void main()
{
    int a[10][10],n,m,i,j;
    printf("Enter number of rows and number of columns: ");
    scanf("%d%d",&n,&m);
    printf("Enter thr elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
