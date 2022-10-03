#include <stdio.h>
#include <string.h>

int count(char str[])

{

    int i = 0;

    i = strlen(str);

    return i;
}

int main()

{
    // code
    char str[500];

    printf("enter the string: ");

    scanf("%s", str);

    printf("the total string lenght is %d", count(str));

    return 0;
}
