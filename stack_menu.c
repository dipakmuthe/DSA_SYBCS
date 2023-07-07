#include<stdio.h>
#define MAX 5
struct stack
{
    int a[MAX];
    int top;
}s1;
void init()
{
    s1.top=-1;
}
int isempty()
{
    if(s1.top==-1)
     return 1;
    else
    return 0;
}
 int isfull()
 {
    if(s1.top==MAX-1)
    return 1;
    else 
    return 0;
 }
 void push(int num)
 {
    if(isfull())
    printf("\n Stack is full dont PUSH..");
    else 
    {
        s1.top++;
        s1.a[s1.top]=num;
        printf("\n PUSH Successful..........");
    }
 }
   void pop()
    {
       int val;
       if(isempty())
       {
        printf("\n Stack is empty dont pop");
       }
       else
       {
        val=s1.a[s1.top];
        s1.top--;
        printf("\n Poped value=%d",val);
        printf("\n no=%d",val);
       }
    }
    void disp()
    {
        int i;
        for(i=s1.top;i>=0;i--)
        {
            printf("%d\n",s1.a[i]);
        }
    }
  int main()
  {
    int ch,num;
    init();
    do{
        printf("\n 1-Push\n 2-POP\n 3-Display");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:printf("\nEnter Number:");
               scanf("%d",&num);
               push(num);
               break;
        
        case 2:pop();
               break;

        case 3:disp();
               break;

        default:printf("\n Inavalid Choice........");
            break;
        }
    }while (ch<4);
  }