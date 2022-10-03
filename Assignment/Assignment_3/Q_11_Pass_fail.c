#include<stdio.h>
int main()
{
//code
int a,b,c,d,z;

printf("enter the marks of subject: ");

scanf("%d%d%d%d",&a,&b,&c,&d);

z=a+b+c+d;

if (z<=500 && z>=165) 

printf("your are passed");

else 

printf("you are failed");



return 0;
}
