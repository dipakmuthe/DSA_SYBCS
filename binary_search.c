#include<stdio.h>
int main()
{
    int n,top,bottom,num,i,mid,flag=0,a[100];
    printf("\n Enter Limit :");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n Enter Number to search :");
    scanf("%d",&num);
    
    top=0;
    bottom=n-1;
    while(top<bottom)
    {
        mid=(top+bottom)/2;
        if(num==a[mid])
        {
            flag=1;
            break;
        }
        if(num>a[mid])
        top=mid+1;
        else
        bottom=mid-1;
    }
    if(flag==1)
    printf("\n Number is found.....");
    else
    printf("\n Number is not found....");
}