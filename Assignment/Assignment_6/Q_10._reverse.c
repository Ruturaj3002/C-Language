#include<stdio.h>
int main()
{
//code
int x,y,z=0;

printf("enter the nmuber: ");

scanf("%d",&x);

while (x!=0)
{

y=x%10;

x=x/10;

z=z*10+y;

}
printf("reverse is %d",z);

return 0;
}
