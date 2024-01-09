#include<stdio.h>
#include<string.h>
  struct student 
  {
    int rno;
    char name[20];
    float per ;
  }s1[100];
 int main()
 {
    int n,i,flag=0;
    char name[20];
    printf("Enter Limit :");
    scanf("%d",&n);
 
    printf("\n Enter %d Student Rno , Name , Per:",n);
    for(i=0;i<n;i++)
    {
    scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
    }
    printf("Enter Name To search:");
    scanf("%s",&name);

    for(i=0;i<n;i++)
    {
        if(strcmp(s1[i].name,name)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag=1)
    printf("\n Student Roll NO=%d\n name=%s\n per=%f",s1[i].rno,s1[i].name,s1[i].per);
    else
    printf("\n Record not Found");
}