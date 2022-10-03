#include<stdio.h>
int main()
{
//code
int x;

printf("enter the number: ");

scanf("%d",&x);

if(x & 1)
    {
        printf("%d is odd.", x);
    }
    else
    {
        printf("%d is even.", x);
    }


return 0;
}
