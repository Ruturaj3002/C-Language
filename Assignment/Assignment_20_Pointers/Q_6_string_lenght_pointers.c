#include <stdio.h>

#include <string.h>

int main()
{
    // code
    char a[200];

    int i;

    printf("enter the string: ");

    fgets(a, 200, stdin);

    for (i = 0; *(a + i); i++);

    printf("the length of string is: %d", i - 1); //-1 is for null

    return 0;
}
