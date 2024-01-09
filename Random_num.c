#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("\n Random Numbers :");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}