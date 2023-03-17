#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int a[10],no,i,pos,val;


printf("enter your array value");
scanf("%d",&no);


for(i=0;i<=no-1;i++)
{

  scanf("%d",&a[i]);


}

for(i=0;i<=no-1;i++)
{

  printf("%d",a[i]);


}


printf("enter position");
scanf("%d",&pos);

printf("enter value");
scanf("%d",&val);



for(i=no-1;i>=pos;i--)
{
   a[i+1]=a[i];
}

no++;

a[pos]=val;


for(i=0;i<=no-1;i++)
{

  printf("%d",a[i]);


}

getch();


}