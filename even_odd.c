/*Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.*/
#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
printf("the %d is even",n);
else
printf("the %d is odd",n);
}