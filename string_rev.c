#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,n;
    char s1[20][20],name[20];
    printf("Enter limit :");
    scanf("%d",&n);
    printf("Enter N city  name :");
    for(i=0;i<n;i++)
    scanf("%s",&s1[i]);

    printf("\n City in Reverse Order:");
    for(i=0;i<n;i++)
    printf("%s\t",strrev(s1[i]));

}