#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],i,j,a1,b1,flag=0,z=0;
    printf("Enter size of set a ");
    scanf("%d",&a1);
    printf("Enter elements of set a \n");
    for(i=0;i<a1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of set b ");
    scanf("%d",&b1);
    printf("Enter elements of set b \n");
    for(i=0;i<b1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<b1;i++)
    {
        for(j=0;j<a1;j++)
        {
            if(b[i]==a[j])
                flag=1;
        }
        if(flag==1)
        {
            c[z]=b[i];
            z++;
        }
        flag=0;
    }
    printf("Intersection of sets are \n");
    for(i=0;i<z;i++)
    {
        printf("%d ",c[i]);
    }
}
