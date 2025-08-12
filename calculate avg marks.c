#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter marks of 3 subjects");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    printf("%d = total marks",d);
    scanf("%d",&d);
    e=d/3;
    printf("%d=average marks",e);
}