#include<stdio.h>
void main()
{
    int a[10][10],n,i,j,s=0;
    printf("Enter number of terms matrix A");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The determinant is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
        }
    }
    printf("%d",s);
}
