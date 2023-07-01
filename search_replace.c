#include<stdio.h>
int main()
{
    int a[100],i,n,num,x,y;
    printf("Enter the limit :");
    scanf("%d",&n);

    printf("Enter %d Number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter Number to search:");
     scanf("%d",&x);
     printf("Enter Number to replace:");
     scanf("%d",&y);
     
     for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            a[i]=y;
        }
    }
    printf("\n Replace Array :");
    for(i=0;i<n;i++) 
    {
        printf("%d\t",a[i]);
    }   
}
