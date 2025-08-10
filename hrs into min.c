#include<stdio.h>
void main()
{
    int a,b;
    printf("enter hours");
    scanf("%d" , &a);
    b = a * 60;
    printf("%d hours = %d minutes\n",a,b);
}