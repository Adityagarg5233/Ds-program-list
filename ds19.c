#include<Stdio.h>
void main()
{
    int a[10][10],i,j,n,temp;
    printf("Enter number of rows and columns\n");
    scanf("%d",&n);
    printf("Enter elements of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
