#include<stdio.h>
#include<ctype.h>
#define MAX 100
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
 int isempty()
  {
   if(s1.top==-1)
   return 1;
  else
  return 0;
}
  void push(char x)
   { 

   if(isfull())
    printf("stack is full....");
     else
    {
      s1.top++;
      s1.a[s1.top]=x;
    }
    }
   char pop()
{
    char ch;
    if(isempty())
    return -1;
    else
{
   ch=s1.a[s1.top];
    s1.top--; 
     return ch;
  }
}
int priority (char x)
{
  
   if(x=='(')
    return 0;
    if(x=='+'||x=='-')
    return 1;
    if(x=='*'||x=='/');
      return 2;
    if(x=='^'||x=='$'||x=='|')
       return 3;
      return 0;
    }
  int main()
{
  char infix[40],postfix[40],ch;
   int i,j=0;
  printf ("enter infix expression:");
  scanf("%s",&infix);
 init();
  for(i=0;infix[i]!='\0';i++)
{
if(isalpha(infix[i]))
     postfix[j++]=infix[i];
    else if(infix[i]=='(')
    push(infix[i]);
    else if(infix[i]==')')
    {
     while((ch=pop())!='(')
    { 
    postfix[j++]=ch;
    }   
    }
    else
    {
    while(priority (s1.a[s1.top])>=priority (infix[i]))
    { postfix[j++]=pop();
    }
    push(infix[i]);
   }
} 
  while(!isempty())
{
  postfix[j++]=pop();
}
 postfix[j]='\0';
printf("\npostfix string=%s",postfix);

}