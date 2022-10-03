#include <stdio.h>
void reapated(char str[])
{
    int i;
    char freq[150];

    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
        
    }

    for (i = 0; i < 150; i++)
    {
        if (freq[i]!=0)

            printf("the %c is accurs an %d times ", i, freq[i]);
    }
}

int main()
{
    // code
    char str[500];

    printf("enter the string: ");

    fgets(str, 500, stdin);

    reapated(str);

    return 0;
}
