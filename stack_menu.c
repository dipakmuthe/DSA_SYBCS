#include<stdio.h>
#include"stack.h"
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