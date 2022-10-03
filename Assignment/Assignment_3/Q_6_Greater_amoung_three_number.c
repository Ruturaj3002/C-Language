#include<stdio.h>
int main()
{
//code
int a,b,c;

printf("enter three number: ");

scanf("%d%d%d",&a,&b,&c);

//nesting and use of conditional operator  {a?b a,b } like if else printf 


printf("%d", a>b? a>c?a:c  : b>c?b:c );


return 0;
}

