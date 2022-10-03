#include <stdio.h>
#include<string.h>
int main()
{
    // code
    char str[5][20];
    int i, j, vowels = 0;

    printf("enter 5 strings: ");

    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 5; i++)
    {

        for (j = 0; str[i][j] != 0; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'A' || str[i][j] == 'e' || str[i][j] == 'E' || str[i][j] == 'i' || str[i][j] == 'I' || str[i][j] == 'o' || str[i][j] == 'O' || str[i][j] == 'u' || str[i][j] == 'U')
                vowels++;
        }
        printf("\nthe string %s content vowles %d ", str[i], vowels);
        vowels=0;
    }

    return 0;
}
