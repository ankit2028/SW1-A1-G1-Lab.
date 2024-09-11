#include <stdio.h>
 
int main()
{
    int i,n;
    printf("Enter Numbers of elements:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&num[i]);
    }
    int small=num[0];
    int large=num[0];
    for(i=1;i<n;i++)
    {
        if(num[i]<small)
        {
            small=num[i];
        }
        if(num[i]>large)
        {
            large=num[i];
        }
    }
    printf("small element is %d",small);
     printf("\nlarge element is %d",large);
     int del;
printf("\nenter the position of element you wnat to delete:");
scanf("%d",&del);
if(del<1||del>n)
{
    printf("enter a valid position:");
}
else
{
   for(i=del-1;i<n-1;i++)
   {
    num[i]=num[i+1];
   }
   n--;
}
printf("\nFinal array is:");
for(i=0;i<n;i++)
{
    printf("\n%d",num[i]);
}
}



     
    

 