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





for(i=0;i<=no-1;i++)
{
 if(a[pos]==a[i])
{

  a[i]=a[i+1];
   }
}

no--;




for(i=0;i<=no-1;i++)
{

  printf("%d",a[i]);


}

getch();


}