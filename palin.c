#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,rev=0,rem;
clrscr();
scanf("%d",&n);
num=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==num)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
