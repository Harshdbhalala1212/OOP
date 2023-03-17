#include<stdio.h>
#include<conio.h>
void sum(int [],int);
void main()
{
 clrscr();
 int a[10],n,i;
 printf("How many:");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
 }
 sum(a,n);

 getch();
}
void sum(int b[],int m)
{
  int sum1=0,i;
  for(i=0; i<m; i++)
  {
    sum1=sum1+b[i];
  }
  printf("sum of array=%d",sum1);
}