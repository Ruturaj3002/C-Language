#include <stdio.h>

int main()
{
    // code
    char str[200];

    int i, vowels = 0, con = 0;

    printf("enter the string: ");

    fgets(str, 200, stdin);

    for (i = 0; *(str + i); i++)
    {

        if ((*(str + i) == 'a') ||
            (*(str + i) == 'e') ||
            (*(str + i) == 'i') ||
            (*(str + i) == 'o') ||
            (*(str + i) == 'u'))
        {
            vowels++;
        }
        else
        {
            con++;
            
        }
    }

    printf("total vowels is %d", vowels);

    printf("\ntotal con is %d", con - 1);

    return 0;
}
