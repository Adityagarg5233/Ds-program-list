#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],a1,a2,b1,b2,i,j;
    printf("Enter number of rows and columns of matrix A\n");
    scanf("%d%d",&a1,&a2);
    printf("Enter number of rows and columns of matrix B\n");
    scanf("%d%d",&b1,&b2);
    if(a1!=b1||a2!=b2)
    {
        printf("Number of rows and columns of both matrix should be same ");
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
    printf("The subtraction of matrix is\n");
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
