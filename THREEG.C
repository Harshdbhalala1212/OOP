#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 printf("Enter a,b and c value:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
   if(a>c)
   {
     printf("a");
   }
   else
   {
     printf("c");
   }
 }
 else
 {
   if(b>c)
   {
      printf("b");
   }
   else
   {
      printf("c");
   }
 }
 getch();
}