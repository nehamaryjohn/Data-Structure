#include<stdio.h>
void main()
{
int a[10],n,left=0,i,num,right,middle;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be search:");
scanf("%d",&num);
right=n-1;
while(left<=right)
{
middle=(left+right)/2;
if(a[middle]==num)
{
printf("The element is found at the position %d",middle);
break;
}
else if(a[middle]>num)
{
right=middle-1;
}
else
{
left=middle+1;
}
if(left>right)
{
printf("Element not found in the list");
}
}
}
