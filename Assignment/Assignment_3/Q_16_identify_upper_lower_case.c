#include<stdio.h>
int main()
{
//code
char x;

printf("enetr the alphabet: ");

scanf("%c",&x);

if (x>='A' && x<='Z')

printf("uppar case");

else if(x>='a' && x<='z')

printf("lowser case");

else 

printf("the alphbet is number or special character");

return 0;

}
