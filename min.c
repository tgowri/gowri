#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,min;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min<a[i])
{
min=a[i];
}
}
printf("%d",min);
getch();
}
