#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20];
 int i,count=0;
 clrscr();
 printf("Enter your string:");
 for(i=0;i<='\0';i++)
 {
   scanf("%c",&a[i]);
   count++;
 }
 for(i=0;i<='\0';i++)
 {
   printf("%c",a[i]);

 }
 printf("\ncount=%d",count);
 getch();
}