#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z=0;
clrscr();
printf("enter two values");
scanf("%d%d",&x,&y);
while(y!=0)
{
z=z*x;
y--;
}
printf(z);
getch();
}
