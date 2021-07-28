/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.*/
#include<stdio.h>
int main()
{
int quan,discount=0;
float pr,total;
printf("enter the price");
scanf("%d",&pr);
printf("enter the quantity");
scanf("%d",&quan);
if(quan>1000)
discount=10;
total=(quan*pr)-(quan*pr*discount/100);
printf("your amount is:- %f",total);
}
