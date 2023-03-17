#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b;
 printf("Enter a & b value:");
 scanf("%i %i",&a,&b);
 if(a<b)
 {
   printf("b is gretter");
 }
 else
 {
   printf("a is gretter");
 }
 getch();
}