#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the limit :");
    scanf("%d",&n);

    printf("Enter %d Number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }
    printf("Square of Array :");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }   
}