#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the choice");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("the number is greater");
    else
    printf("the number is less");
    break;
    case 2:
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    if (a==b)
    printf("the number is equal");
    else
    printf("the number is greater");
    break;
    default:
    printf("the number is not less than or greater than nor equal");
    }
}
