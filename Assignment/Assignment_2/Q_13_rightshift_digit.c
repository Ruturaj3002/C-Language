#include<stdio.h>

int main()

{
//code
int x;


printf("enter the three digit number: ");

scanf("%d",&x);

x=x%10*100+x/10;


printf("the shifted number is %d",x);


return 0;

}
