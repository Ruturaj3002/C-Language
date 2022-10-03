#include<stdio.h>

int main()

{
//code
int x,i,z=0;


printf("enter the number: ");


scanf("%d",&i);


for (x=1;x<=i;x++)
{

z = z+x*x;

}
printf("%d ",z);


return 0;

}
