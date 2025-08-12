#include<stdio.h>
void main()
{
    int a,b;
    printf("enter temperature in farhenite");
    scanf("%d",&a);
    b=(a-32)*5/9;
    printf("%d celcius",b);
}