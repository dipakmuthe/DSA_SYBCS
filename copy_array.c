#include<stdio.h>
int main()
{
    int a[100],b[100],i,n;
    printf("Enter Limit:");
    scanf("%d",&n);

    printf("\nEnter %d Numbers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
   for(i=0;i<n;i++)
   {
      b[i]=a[i];
   }
   printf("\n Copied Array :");
   for(i=0;i<n;i++)
   {
     printf("%d\t",b[i]);
   }
}