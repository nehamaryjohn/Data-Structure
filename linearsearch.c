#include<stdio.h>
void main()
{
int i,a[5],n,s;
printf("Enter the size in array:");
scanf("%d",&n);
printf("enter the elements in the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be searched:\n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("%d is  located in %d",s,i);
break;
} 
if(i==n)
{
printf("%d is not present\n",s);
}
}
}

