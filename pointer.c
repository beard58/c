#include<stdio.h>
int main(){
    int b=10,*p1;
    char c='a',*p2;
    int a[50]={10,20,30},*p3;

    p1=&b;
    p2=&c;
    p3=&a;

    printf("%d",*p1);
    printf("hello%c",*p2);
    printf("%d",*p3);

}