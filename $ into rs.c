#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value in dollars");
    scanf("%d" , &a);
    b = a*48;
    printf("%d dollars = %d rupees\n",a,b);
}