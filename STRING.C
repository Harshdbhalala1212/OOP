#include<stdio.h>
#include<conio.h>


void main()
{
 clrscr();
 int i,n;
 char a[10];
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   fflush(stdin);
   scanf("%c",&a[i]);

 }

 for(i=0;a[i]!='\0';i++)

 {

   printf("%c",a[i]);
 }
 getch();

}