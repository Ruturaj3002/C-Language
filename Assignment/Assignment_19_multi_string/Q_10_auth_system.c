#include <stdio.h>
#include <string.h>
int main()
{
    // code
    int i, flag = 0;

    char str[3][3][20] = {{"ruturaj", "123"}, {"sparky", "302"}, {"new", "321"}};

    char username[20];

    char password[20];

    printf("enter your username: ");

    gets(username);

    printf("enter your password: ");

    gets(password);

    for (i = 0; i < 3; i++)

    {
        if (strcmp(username, str[i][0]) == 0 && strcmp(password, str[i][1]) == 0)
        {
            printf("your login is successful !!");
            flag = 1;
        }
    }
    if (flag == 0)

        printf("user id not found plese check username or password");

    return 0;
}
