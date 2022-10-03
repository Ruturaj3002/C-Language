#include<stdio.h>
int main()
{
//code

int x,i=0;


printf("enter the mumber: ");

scanf("%d",&x);

while (x !=0)
{
    
x=x/10;

i++;

}
printf("the digit in number is %d",i);



return 0;
}
