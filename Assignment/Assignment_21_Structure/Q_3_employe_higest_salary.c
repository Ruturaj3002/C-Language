#include <stdio.h>

struct employe
{
    int employeid;

    char employename[20];

    int employesalary;
};
struct employe input()
{
    struct employe e;

    printf("enter employe id: ");

    scanf("%d", &e.employeid);

    printf("enter employe name: ");

    fflush(stdin);

    fgets(e.employename, 20, stdin);

    printf("enter employe salary: ");

    scanf("%d", &e.employesalary);

    return e;
}
int main()
{
    // code
    struct employe e[3];

    int i, high = 0;

    for (i = 0; i < 3; i++)
    {
        e[i] = input();
    }

    high = e[0].employesalary;

    for (i = 0; i < 3; i++)
    {
        if (e[i].employesalary > high)
            high = e[i].employesalary;
    }
    printf("\n");

    printf("Highest salary employee details:\n");

    for (i = 0; i < 3; i++)
    {
        if (e[i].employesalary == high)
            printf("\n id=%d name=%s salary=%d", e[i].employeid, e[i].employename, e[i].employesalary);
    }

    return 0;
}
