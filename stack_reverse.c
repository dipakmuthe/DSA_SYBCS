#include<stdio.h>
#include"cststack.h"
int main()
{
  char s1[50];
  int i;
  init();
  printf("Enter string:");
  gets(s1);
  for(i=0;s1[i]!='\0';i++)
  {
     push(s1[i]);
  }  
  printf("\n Reverse String=");
  disp();
}