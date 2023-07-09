#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,n;
    char s1[20][20],name[20];
    printf("Enter limit :");
    scanf("%d",&n);
    printf("Enter N student  name :");
    for(i=0;i<n;i++)
    scanf("%s",&s1[i]);

    printf("Enter Name To search :");
    scanf("%s",&name);

    for(i=0;i<n;i++)
{
    if(strcmp(s1[i],name)==0)
    {
        flag=1;
        break;
    }
}
   if(flag==1)
   printf("\n Record is Found.......");
   else 
   printf("\n Record not Found.....");

}