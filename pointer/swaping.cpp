#include<stdio.h>
#include<conio.h>
int main()
{
    int a=9,b=3,*p1,*p2;
    *p1=*p1-*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("a=%d,b=%d",*p1,*p2);
}