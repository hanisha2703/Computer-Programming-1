#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter 3 values for principal amount, intrest rate, and time");
    scanf("%d %d %d",&a,&b,&c);
    d=a*b*c/100;
    printf("%d percent intrest",d);
}