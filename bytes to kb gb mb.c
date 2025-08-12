#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value in bytes");
    scanf("%d",&a);
    b=a/1000;
    printf("%d KB",b);
    scanf("%d",&a);
    b=a/1000000;
    printf("%d MB",b);
    scanf("%d",&a);
    b=a/1000000000;
    printf("%d GB",b);
}