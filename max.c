#include<stdio.h>

void main()
{
int n,a[10],i,max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(max>a[0])
{
max=a[0];
}
}
printf("%d",max);
return 0;
}
