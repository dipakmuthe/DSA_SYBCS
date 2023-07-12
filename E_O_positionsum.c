#include<stdio.h>
int main()
{
    int a[100],i,n,num,s1=0,s2=0,ch;
    printf("Enter the limit :");
    scanf("%d",&n);

    printf("\nEnter %d Number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do{
        printf("\nChoices:\n 1-Even Position sum \n 2-Odd Position sum");
        printf("\nEnter choice:");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: for(i=0;i<n;i++)
               {
                if(i%2==0)
               {
                s1=s1+a[i];
               }
               }
               printf("\n Even position sum=%d",s1);
               break;

        case 2:for(i=0;i<n;i++)
               {
                if(i%2!=0)
               {
                s2=s2+a[i];
               }
               }
               printf("\n Odd position sum=%d",s2);
               break;

        default: printf("\n Invalid Choice......");
            break;
        }
    } while(ch<3);
    
}