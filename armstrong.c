#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,n,c;
clrscr();
scanf("%d",&n);
c=n;
while(c!=0)
{
a=c%10;
b=b+a*a*a;
c=c/10;
}
if(b==n)
{
printf("armstrong number");
}
else
printf("Not an armstrong number");
getch();
}
