#include <stdio.h>
int main()
{
    // code
    char str[500], ch;

    int i, count=0;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    printf("enter the character want to know the frequency: ");

    scanf("%c", &ch);

    for (i = 0; str[i] != 0; i++)
    {

        if (ch == str[i])

            count++;
    }

    printf("the frequency of character %c is %d ", ch, count);

    return 0;
}
