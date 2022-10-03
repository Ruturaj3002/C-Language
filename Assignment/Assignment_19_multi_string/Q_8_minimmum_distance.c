#include <stdio.h>
#include <string.h>
int main()
{
    // code
    char str[5][30] = {"rutuiraj", "shinde", "hello", "now", "bye"};

    char word1[] = "ruturaj";
    char word2[] = "bye";

    int i, w1 = -1, w2 = -1, min = 0, temp;

    // printf("enter the string: ");

    // for(i=0;i<5;i++)
    //{
    //     gets(str[i]);
    // }
    //
    // printf("enter the word: ");

    // scanf("%s", &word1);
    //
    // printf("enter second word: ");
    //
    //// scanf("%s", &word2);
    //
    for (i = 0; i < 5; i++)
    {

        if (strcmp(str[i], word1) == 0)
            w1 = i;

        if (strcmp(str[i], word2) == 0)

            w2 = i;

        if (w1 != -1 && w2 != -1)
        {

            temp = abs(w2 - w1);

            if (temp < min)

                min = temp;
        }
    }
    printf("the minimun distance is %d ", min - 1);

    return 0;
}
