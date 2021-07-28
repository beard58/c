/*If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/
#include<stdio.h>
int main(){
int cp,sp,profit,loss;
printf("enter the cost price: ");
scanf("%d",&cp);
printf("enter the selling price:");
scanf("%d",&sp);
profit=sp-cp;
loss=cp-sp;
if(cp>sp)
printf("you are in loss with amount=%d",loss);
else
printf("you are in profit with amount=%d",profit);
}