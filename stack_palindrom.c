#include<stdio.h>
#include<string.h>
#define MAX 100
struct stack
{
    char a[MAX];
    int top;
}*s1;
void init()
{
    s1->top=-1;
}
int isfull()
{
    if(s1->top==MAX-1)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(s1->top==-1)
    return 1;
    else
    return 0;
}
void push(char ch)
{
    if(isfull())
    printf("\n Satck is full dont push....");
    else
    {
        s1->top++;
        s1->a[s1->top]==ch;
    }
}
char pop()
{
    char ch;
    if(isempty())
    printf("\n Stack is empty......");
    else
    {
        ch=s1->a[s1->top];
        s1->top--;
        return ch;
    }
}
int main()
{
    char s[20];
    int i;
    printf("Enter string :");
    gets(s);
    init();
    for(i=0;s[i]!='\0';i++)
    {
        push(s[i]);
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=pop())
        break;
    }
    if(isempty())
    printf("\n String is Palindrome.........\n");
    else
    printf("\n String is Palindrome......\n");
}