#include<stdio.h>
void main()
{
int n,c,i;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
c=n*i;
printf("%d*%d=%d\n",n,i,c);
}
}
