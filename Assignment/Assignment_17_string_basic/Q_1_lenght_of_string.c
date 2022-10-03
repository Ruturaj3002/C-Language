#include <stdio.h>
int main()
{
    // code
    char a[50];

    int i;

    printf("enter the string: ");

    scanf("%s", a);

    for (i = 0; a[i] != '\0'; ++i)
        ;

    printf("the length of string is %d", i);

    return 0;
}
