#include<stdio.h>
int main()
{
    int n,i,num,flag,a[100];
    int search(int n,int a[100],int num);
    printf("\n Enter Limit :");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n Enter Number to search :");
    scanf("%d",&num);
    flag=search(n,a,num);
     if(flag==1)
    printf("\n Number is found.....");
    else
    printf("\n Number is not found....");
}
  int search(int n,int a[100],int num)
{   
    int top=0,bottom=n-1,mid,flag=0;
     
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
      return flag;
}