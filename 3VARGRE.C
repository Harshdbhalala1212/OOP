#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 printf("Enter a,b & c  value:");
 scanf("%i %i %i",&a,&b,&c);
 if(a<b)
 {
    if(a<c)
    {
	printf("a is smaller");
    }
    else
    {
	printf("c is smaller");
    }
 }
 else
 {
     if(b<c)
     {
	printf("b is smaller");
     }
     else
     {
	printf("c is smalle	r");
     }
 }
 getch();
}