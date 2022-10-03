#include<stdio.h>
int main()
{
//code
int x;

printf("enter the month number: ");

scanf("%d",&x);

switch (x)
{
case 1 :
printf("Jan has 31 days");
    
    break;


case 2 :

printf("Feb has 28 days");
   
    break;

case 3:

printf("March has 31 days");
   
    break;

case 4:

printf("April has 30 days");
   
    break;

case 5:

printf("May has 31 days");
   
    break;

case 6:

printf("June has 30 days");
   
    break;

case 7 :

printf("July has 31 days");
   
    break;

case 8:

printf("Aug has 31 days");
   
    break;

case 9 :

printf("Sep has 30 days");
   
    break;

case 10 :

printf("Oct has 31 days");
   
    break;

case 11:

printf("Nov has 30 days");
   
    break;

case 12:    

printf("Dec has 31 days");
   
    break;

default:

printf("your enter month number is not exist ~ ");
    break;
}






return 0;
}
