#include<stdio.h>
#include<ctype.h>
#define MAX 100
struct stack
{
    char a[MAX];
    int top;
}s;
void init()
{
    s.top=-1;
}
int isempty()
{
    if(s.top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(s.top==MAX-1)
    return 1;
    else
    return 0;
}
void push(char x)
{
    if(isfull())
    printf("\nStack is full.........dont push");
    else
    {
        s.top++;
        s.a[s.top]=x;
    }
}
char pop()
{
    char ch;
    if(isempty())
    return 1;
    else
    {
        ch=s.a[s.top];
        s.top--;
        return ch;
    }
}
int priority(char x)
{
    if(x=='(')
    return 0;
    if(x=='+'||x=='-')
    return 1;
    if(x=='*'||x=='/')
    return 2;
    return 0;
}
int main()
{
    char s1[100],ch;
    int i;
    printf("\n enter the infix expression:");
    scanf("%s",&s1);
    printf("\n");
    init();
    for(i=0;s1[i]!='\0';i++)
    {
        if(isalpha(s1[i]))
        printf("%c",s1[i]);
        else if(s1[i]=='(')
        push(s1[i]);
        else if(s1[i]==')')
        {
            while((ch=pop())!='(')
            printf("%c",ch);
        }
        else 
        {
            while(priority(s.a[s.top])>=priority(s1[i]))
            {    printf("%c",pop());
            }
            push(s1[i]);
        }
    }
    while(!isempty())
        printf("%c",pop());
    
}
