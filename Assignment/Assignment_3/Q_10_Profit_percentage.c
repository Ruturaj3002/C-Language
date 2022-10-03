#include<stdio.h>
int main()
{
//code

float x,y,p,z;

printf("enter the cost price: ");

scanf("%f",&x);

printf("enter the selling price: ");

scanf("%f",&y);

p=(y-x);

z=p/x*100;

printf("the profit percentenage is %f ",z);


return 0;


}
