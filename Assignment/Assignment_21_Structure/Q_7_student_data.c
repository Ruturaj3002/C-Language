#include <stdio.h>

struct student
{
    int studentid;

    char studentname[20];

    int studentpercentage;
};
struct student input()
{
    struct student e;

    printf("enter student id: ");

    scanf("%d", &e.studentid);

    printf("enter student name: ");

    fflush(stdin);

    fgets(e.studentname, 20, stdin);

    printf("enter student percentage: ");

    scanf("%d", &e.studentpercentage);

    return e;
}

void display(struct student e)
{
    printf("\n id=%d name=%s percentage=%d", e.studentid, e.studentname, e.studentpercentage);
    printf("\n");
}

int main()
{
    // code

    struct student e[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        e[i] = input();
    }

    printf("the student detils is ");

    for (i = 0; i < 3; i++)
    {
        display(e[i]);
    }

    return 0;
}
