//aditya garg
#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],a1,a2,b1,b2,i,j,k;
    printf("Enter number of rows and columns of matrix A\n");
    scanf("%d%d",&a1,&a2);
    printf("Enter number of rows and columns of matrix B\n");
    scanf("%d%d",&b1,&b2);
    if(a2!=b1)
    {
        printf("Number of columns of matrix A must be equal to number of Rows of B ");
        exit(0);
    }
    printf("Enter elements of set A\n");
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of set B\n");
    for(i=0;i<a2;i++)
    {
        for(j=0;j<b2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multiplication of matrix is\n");
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b2;j++)
        {
            c[i][j]=0;
            for(k=0;k<a1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
