//aditya garg
#include<stdio.h>
void main()
{
    int a[100],b[100],c[200],a1,b1,i,j,z=0,found=0;
    printf("Aditya garg\n");
    printf("Enter number of terms of set 1\n");
    scanf("%d",&a1);
    printf("Enter number of terms of set 2\n");
    scanf("%d",&b1);
    printf("Enter terms of set 1\n");
    for(i=0;i<a1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter terms of set 2\n");
    for(i=0;i<b1;i++)
      {
        scanf("%d",&b[i]);
      }

    for(i=0;i<a1;i++)
    {

        for(j=0;j<b1;j++)
        {
            if(a[i]==b[j])
                found=1;
        }
        if(found==0)
        {
            c[z]=a[i];
            z++;
        }
        found=0;
    }
    for(i=0;i<b1;i++)
    {

        for(j=0;j<a1;j++)
        {
            if(b[i]==a[j])
                found=1;
        }
        if(found==0)
        {
            c[z]=b[i];
            z++;
        }
        found=0;
    }
    printf("new elements are ");
     for(i=0;i<z;i++)
        {
            printf("%d ",c[i]);
        }
}
