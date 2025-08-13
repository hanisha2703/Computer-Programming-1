#include<stdio.h>
int main()
{
int a,b;
printf("enter 2 numbers");
scanf("%d%d" ,&a,&b);
if(a>b)
{
printf("%d is greatest and %d is smallest",a,b);
}
else
{
printf("%d is smallest and %d is greatest",a,b);
}
}
