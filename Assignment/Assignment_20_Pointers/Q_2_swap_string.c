#include <stdio.h>
#include <string.h>

void swap(char **x, char **y)
{
    char *temp;

    temp = *x;

    *x = *y;

    *y = temp;
}

int main()
{
    // code
    char a[50], b[50];

    printf("enter first string: ");

    fgets(a, 50, stdin);

    printf("\n enter second string: ");

    fgets(b, 50, stdin);

    swap(&a, &b);

    printf("the first string is %s", a);

    printf("the second string is %s", b);

    return 0;
}
