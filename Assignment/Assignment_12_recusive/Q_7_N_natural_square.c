#include <stdio.h>

void squ(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    squ(x);

    return 0;
}
void squ(int a)

{

    if (a > 0)

    {

        squ(a - 1);

        printf("%d ", a * a);
    }
}