#include <stdio.h>
#include <string.h>
void palindrome(char str[], int l)
{
    int i, temp = 0;

    for (i = 0; i < l; i++)

    {
        if (str[i]=str[l-i-1])

            temp = 1;

        break;
    }

    if (temp == 0)
        printf("not palindrone");

    else

        printf("palindrone");
}

int main()
{
    // code
    char str[500];

    int i, len = strlen(str);

    printf("enter the string:");

    fgets(str, 500, stdin);

    palindrome(str, len);

    return 0;
}
