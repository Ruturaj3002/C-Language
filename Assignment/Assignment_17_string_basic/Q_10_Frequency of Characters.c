#include <stdio.h>
int main()
{
    // code
    char str[500], freq[150];
    int i;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    while (str[i] != '\0')

    {

        freq[str[i]]++;
        i++;
    }

    for (i = 0; i < 150; i++)
    {
        if (freq[i] != 0)

            printf("the %c is accurs an %d times ", i, freq[i]);
    }
    return 0;
}
