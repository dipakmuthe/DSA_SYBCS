#include<stdio.h>
int main()
{
    int a[100],i,n,num,flag=0,cnt=0;
    printf("Enter the limit :");
    scanf("%d",&n);

    printf("Enter %d Number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter Number to search:");
     scanf("%d",&num);

     for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
           cnt++;
        }
    }
    if(flag==1)
    printf("\n Number is Present %d times",cnt);
    else
    printf("\n Number is not found.......");
}