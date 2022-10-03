#include <stdio.h>
int main()
{
    // code
    char str[1000];

    int i, alpha = 0, digit = 0, special = 0;

    printf("enter the string: ");

    gets(str);

    for (i = 0; str[i] != 0; i++)

    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')

            alpha++;

        else if 
            (str[i] >= '0' && str[i] <= '9')

                digit++;

        else 

            special++;
    }

    printf("the character in your string is %d and digit is %d and special character is %d ", alpha, digit, special);

    return 0;
}
