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
    
   printf("\nCoping Array........");
   for(i=0;i<n;i++)
   {
      b[i]=a[i];
   }
   printf("\nArray :");
   for(i=0;i<n;i++)
   {
     printf("\n%d",b[i]);
   }
}