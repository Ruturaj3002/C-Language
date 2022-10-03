#include<stdio.h>
int main()
{
//code
int x,y,z;

printf("enter the lenth of side of trianlge: ");

scanf("%d%d%d",&x,&y,&z);


if (x>y+z && y>x+z && z>x+y)


printf("valid triangle");

else 

 printf("invalid triangle");



return 0;
}
