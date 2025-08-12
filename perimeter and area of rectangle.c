#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a value for length and breadth");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d square units\n",c);
    scanf("%d %d", &a,&b);
    c=(a+b)*2;
    printf("%d units\n",c);
}