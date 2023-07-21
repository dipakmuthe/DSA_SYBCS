#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node * create(struct node * head)
{
    int i,n;
    struct node *newnode,*temp;
    printf("Enter Limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Eente Value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head=NULL)
        {
           head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
        return head;    
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
struct node* insertbeg(struct node *head,int num)
{
    struct node *newnod;
    newnode=(struct node * )malloc(sizeof(struct node));
    newnod->data=num;
    newnod->next=head;
    head=newnod;
    return head;
}

struct node* insertend(struct node *head,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return head;
}
int main()
{
    struct node *head=NULL;
    int ch,num;
    do
    {
      printf("\n 1-create \n 2-disp \n 3-insertbeg \n 4-insertend :");
      printf("\n Enter Choice:");
      scanf("%d",&ch);
      switch (ch)
      {
      case 1 :head=create(head);
             break;
      case 2 :display(head);
                break;
      case 3 :printf("\n Enter number :");
                scanf("%d",&num);
      case 4 :printf("\n Enter number :"):
                scanf("%d",%num);
                head=insertend(head,num);
                break;
      default:printf("Invalid Choice......");
               break;
      }
    } while (ch<5);
}