#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("Enter your three value:\n");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2)
{
  if(n1>n3)
  {
     printf("number 1 is grater");
  }
  else
  {
     printf("number 3 is grater");
  }
}
else
{
  if(n2>n3)
  {
     printf("number 2 is grater");
  }
  else
  {
     printf("number 3 is grater");
  }
}
getch();
}