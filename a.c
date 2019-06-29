#include<stdio.h>

int main()
{
int a,b;
printf("enter 2 numbers");
scanf("%d%d"&a,&b);
b=a+b;
b=b-a;
a=b-a;
printf("2 numbers:%d %d"a,b);
return 0;
}