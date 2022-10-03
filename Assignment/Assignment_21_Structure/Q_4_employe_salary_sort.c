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

void display(struct employe e)
{
    printf("\n id=%d name=%s salary=%d", e.employeid, e.employename, e.employesalary);
    printf("\n");
}

void sortBysalary(struct employe e[], int size)
{
    int r, i;
    struct employe temp;

    for (r = 0; r < size; r++)
    {
        for (i = 0; i < size - r; i++)
        {
            if (e[i].employesalary > e[i + 1].employesalary)
            {
                temp = e[i];
                e[i] = e[i + 1];
                e[i + 1] = temp;
            }
        }
    }
}
int main()
{
    // code

    struct employe e[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        e[i] = input();
    }

    sortBysalary(e, 3);

    printf("the sorted salary order is ");

    for (i = 0; i < 3; i++)
    {
        display(e[i]);
    }

    return 0;
}
