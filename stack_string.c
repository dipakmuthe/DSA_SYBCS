#include<stdio.h>
#include<string.h>
#define MAX 5
struct stack
{ 
  char a[MAX];
  int top;
}s1;
 void init()
{
  s1.top=-1;
}
 int isfull()
{
  if(s1.top==MAX-1)
   return 1;
  else
   return 0;
  }
int isempty ()
{
  if(s1.top==-1)
   return 1;
  else
  return 0;
}
char push(char c)
{
  if(isfull())
   printf("stack is full....don't push");
else
  {
  s1.top++;
  strcpy(s1.a[s1.top],c);
 printf("push successfully....");
}
}
char pop()
{
  char val[20];
  if(isempty())
  printf("stack is empty....don't pop");
  else
  {
   strcpy(val,s1.a[s1.top]);
  s1.top--;
 printf("pop successfully..");
printf("\nname=%s",val);
}
}
  void disp()
{
   int i;
  for(i=s1.top;i>=0;i--)
printf("%s\n",s1.a[i]);
}

int main()
{
 int ch;
  char c[20];
init();
 do{
  printf("\n1-push\n2-pop");
printf ("\n3-display");
   printf("\nenter choice:");
  scanf("%d",&ch);
  switch(ch)
{
   
    case 1: printf("enter name to push:");
            scanf("%s",&c);
            push(c);
            break;
            
    case 2: pop();
      
            break;
     
     case 3: disp();
              break;

default: printf ("invalid choice");
            break;      
}
}while(ch<4);
}