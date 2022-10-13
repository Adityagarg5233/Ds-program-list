//aditya garg
#include<stdio.h>
void main()
{
    int a[20],n,i,ele,j;
    printf("Enter number of terms");
    scanf("%d",&n);
    printf("Enter terms");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a element to delete");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
            j=i;
    }
    for(i=j;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("the array is \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
}
