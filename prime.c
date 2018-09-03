#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,x=0,f=0;
clrscr();
scanf("%d",&num);
x=num/2;
for(i=2;i<x;i++)
{
if(num%i==0)
{
printf("yes");
}
else
{
printf("no");
}
}
getch();
}
