#include <stdio.h>
int main()
{
    // code
    char str[1000];

    int i, count = 0, n = 0;

    printf("enter the string: ");

    fgets(str, 1000, stdin);

    for (i = 0; str[i] != 0; i++)
    {

        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')

            count++;
    }

    printf("the total vowles in the string is %d ", count);

    return 0;
}
