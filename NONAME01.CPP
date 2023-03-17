#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[10],b[10];
 int n,i,j,m;
 printf("Enter String:");
 gets(a);
 n=strlen(a);

 printf("Enter Second String:");
 gets(b);
 m=strlen(b);

 strcat(a,b);


 printf("\n\nMerge String:\n");
 puts(a);
 getch();
}