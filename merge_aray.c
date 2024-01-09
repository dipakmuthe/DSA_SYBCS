#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,k,n1,n2,n3;
    printf("Enter Limit of First array :");
    scanf("%d",&n1);
    printf("\n Enter %d Number sorted order :",n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Enter Limit of second array :");
    scanf("%d",&n2);
    printf("\n Enter %d Number sorted order :",n2);
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);

    n3=n1+n2;
    i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<n1)
    {
    c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
  printf("\n Merge array :");
  for(i=0;i<n3;i++)
  {
    printf("%d\t",c[i]);
  }
}