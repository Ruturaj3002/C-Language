#include <stdio.h>
#include <string.h>

void count(char str[])
{

    int i, cal = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
            cal++;
    }
    if (i > 0)
        cal++;

    printf("no of words in string = %d\n", cal);
}
int main()
{
    // code
    char str[500];
    int l = 0;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    count(str);

    return 0;
}
